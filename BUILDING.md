# Compiling FreeMyXe

Compiling FreeMyXe requires:

* Xbox 360 SDK (C compiler, headers, linker tools and basic libraries)
* [GNU Make](https://sourceforge.net/projects/gnuwin32/files/latest/download)
* [Git CLI](https://git-scm.com/downloads)
* *(macOS/Linux only)* Wine

Make sure the following environment variables are set:

* `XEDK` - the install path of the Xbox 360 SDK `The xbox 360 SDK cannot contain any spaces in its path`
* add GNU make to your [paths](https://leangaurav.medium.com/how-to-setup-install-gnu-make-on-windows-324480f1da69)
* *(macOS/Linux only)* `WINDOWS_SHIM` - the path to the version of Wine
  you want to use

Then you should be able to clone and compile the repo within a Terminal:
```
git clone https://github.com/InvoxiPlayGames/FreeMyXe.git
cd FreeMyXe
make
```
