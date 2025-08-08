# FreeMyXe Makefile

# the source code files to compile from
SRC_DIR := source
SOURCES := $(wildcard $(SRC_DIR)/*.c)
INC_DIR := include

# output filename for final XEX file
OUTNAME := FreeMyXe

# definitions for compilation
DEFINES := NDEBUG

# build directory
BUILD := build
# .obj object files
OBJECTS := $(subst $(SRC_DIR),$(BUILD),$(patsubst %.c,%.obj,$(SOURCES)))
# executable tool path
TOOLPATH := $(XEDK)/bin/win32
COMPILER := "$(TOOLPATH)/cl.exe"
LINKER := "$(TOOLPATH)/link.exe"
IMAGEXEX := "$(TOOLPATH)/imagexex.exe"
XEXTOOL := XexTool.exe
# include directories
INCLUDES := "$(XEDK)/include/xbox"
# library directories
LIBDIR := "$(XEDK)/lib/xbox"
# library includes
LIBS := xapilib.lib xboxkrnl.lib
# compiler flags
CFLAGS := -c -Zi -nologo -W3 -WX- -Ox -Os -D _XBOX -D RB3E_XBOX $(patsubst %,-D %,$(DEFINES)) \
			-GF -Gm- -MT -GS- -Gy -fp:fast -fp:except- -Zc:wchar_t -Zc:forScope \
			-GR- -openmp- -FI"$(XEDK)/include/xbox/xbox_intellisense_platform.h" \
			-Fd"$(BUILD)/" -I"$(INC_DIR)" -I"$(INCLUDES)"
# linker flags
LFLAGS := -ERRORREPORT:PROMPT -INCREMENTAL:NO -NOLOGO /LIBPATH:"$(LIBDIR)" $(LIBS) \
			-MANIFESTUAC:"level='asInvoker' uiAccess='false'" -DEBUG \
			-STACK:"262144","262144" -OPT:REF -OPT:ICF -TLBID:1 -RELEASE \
			-XEX:NO
# xex generation flags
XEXFLAGS := -nologo -config:"xex.xml"
# xextool flags
XEXTOOLFLAGS := -e e -c c -m r -r a
# =================

.PHONY: all clean

all: $(OUTNAME).xex

clean:
	@rd /s /q "$(BUILD)" 2>nul || del /q "$(BUILD)" 2>nul
	@del /q "$(OUTNAME).xex" "$(OUTNAME)" 2>nul || exit 0

$(OUTNAME).xex: $(BUILD)/$(OUTNAME).exe
	@echo Creating XEX...
	@mkdir $(dir $@) 2>nul || rem
	@$(WINDOWS_SHIM) $(IMAGEXEX) $(XEXFLAGS) -out:"$@" "$^"
	@$(WINDOWS_SHIM) $(XEXTOOL) $(XEXTOOLFLAGS) $@

$(BUILD)/$(OUTNAME).exe: $(OBJECTS)
	@echo Linking EXE...
	@mkdir $(dir $@) 2>nul || rem
	@set LIB=$(LIBDIR) $(WINDOWS_SHIM) && $(LINKER) $(LFLAGS) -OUT:"$@" -PDB:"$(BUILD)/$(OUTNAME).pdb" -IMPLIB:"$(BUILD)/$(OUTNAME)" $^

$(BUILD)/%.obj: $(SRC_DIR)/%.c
	@mkdir $(BUILD) 2>nul || rem
	@mkdir $(dir $@) 2>nul || rem
	@set INCLUDE=$(INCLUDES) $(WINDOWS_SHIM) && $(COMPILER) $(CFLAGS) -Fo"$@" -TC $<
