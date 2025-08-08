#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "translation.h"

// translation english
LocalisationMessages_t english = {
	L"About to start patching HV and kernel...\n\nYour CPU key is:\n%S\n\nWrite that down and keep it safe!",
	L"OK",
	L"Yay!",
	L"Launch XeLL instead",
	L"Failed to launch XeLL?! Oh well, I'll patch the HV and kernel anyway...",
	L"Hypervisor and kernel have been patched!\n\nYour CPU key is:\n%S\n\nSource code for FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nHave fun!"
};

// translation provided by lexd0g
LocalisationMessages_t spanish = {
	L"A punto de empezar a parchear el hipervisor y el kernel...\n\nLa clave de tu CPU es:\n%S\n\nEscr\u00EDbela y mantenla segura!",
	L"Vale",
	L"Yupi!",
	L"Lanzar XeLL en su lugar",
	L"XeLL no se ha podido iniciar?! Bueno, parcheare el hipervisor y el kernel de todos modos...",
	L"El hipervisor y el kernel han sido parcheados!\n\nLa clave de tu CPU es:\n%S\n\nC\u00F3digo fuente de FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nDivi\u00E9rtete!"
};

// translation provided by needmorepaper
LocalisationMessages_t canadian_french = {
	L"Je vais commencer \u00E0 corriger l'hyperviseur et le noyau...\n\nVotre cl\u00E9 de l'unit\u00E9 centrale est :\n%S\n\n\u00C9crivez \u00E7a sur quelque chose et prot\u00E9gez-la!",
	L"D'accord",
	L"Bravo !",
	L"D\u00E9marrer XeLL au lieu de FreeMyXe",
	L"On \u00E9choue \u00E0 d\u00E9marrer XeLL ?! Bon, de toute fa\u00E7on je vais corriger l'hyperviseur et le noyau...",
	L"L'hyperviseur et le noyau sont corrig\u00E9s!\n\nVotre cl\u00E9 de l'unit\u00E9 centrale est :\n%S\n\nLe code source pour FreeMyXe :\ngithub.com/FreeMyXe/FreeMyXe\n\n"
};

// translation provided by chackAJMCPE and DoruDoLasu
LocalisationMessages_t polish = {
	L"Konsola gotowa na \u0142atanie HV i j\u0105dra...\n\nTw\u00f3j klucz CPU to:\n%S\n\nZapisz go gdzie\u015b i trzymaj w bezpiecznym miejscu!",
	L"OK",
	L"Jupii!!",
	L"Zamiast tego uruchom XeLL",
	L"XeLL nie wystartowa\u0142?! No trudno, w takim razie za\u0142atamy HV i j\u0105dro...",
	L"Hiperwizor i j\u0105dro zosta\u0142y za\u0142atane!\n\nTw\u00f3j klucz CPU to:\n%S\n\nKod \u017ar\u00f3d\u0142owy FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nMi\u0142ej zabawy!"
};

// translation provided by Xyozus
LocalisationMessages_t brazilian_portuguese = {
	L"Prestes a come\u00E7ar a aplicar patches no HV e no Kernel...\n\nSua chave de CPU \u00E9:\n%S\n\nEscreva isso e guarde em algum lugar seguro!",
	L"OK",
	L"De acordo!",
	L"Inicie o XeLL em vez disso",
	L"Falha ao iniciar o XeLL?! Ah, bem, vou corrigir o HV e o Kernel de qualquer maneira...",
	L"O Hipervisor e o Kernel foram corrigidos!\n\nSua chave de CPU \u00E9:\n%S\n\nC\u00F3digo fonte para FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nAproveite!"
};

// translation provided by Animadoria
LocalisationMessages_t portuguese = {
	L"Prestes a come\u00E7ar a fazer o patch do HV e do kernel...\n\nA chave do seu CPU \u00E9:\n%S\n\nEscreva e guarde isto num lugar seguro!",
	L"OK",
	L"Boa!",
	L"Iniciar XeLL em vez disso",
	L"Erro ao iniciar XeLL?! Bem, vou corrigir o HV e o kernel de qualquer forma...",
	L"Hypervisor e kernel foram corrigidos!\n\nA chave do seu CPU \u00E9:\n%S\n\nC\u00F3digo fonte para o FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nDivirta-se!"
};

// translation provided by tuxuser
LocalisationMessages_t german = {
	L"Starte nun patchen des HV und Kernels...\n\nDer CPU Key ist:\n%S\n\nBewahre ihn sicher auf!",
	L"OK",
	L"Yup!",
	L"Stattdessen XeLL starten",
	L"XeLL starten fehlgeschlagen?! Hmmm, ich patche trotzdem nun HV und Kernel ...",
	L"Hypervisor und Kernel wurden gepatcht!\n\nDer CPU Key ist:\n%S\n\nSource code von FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nViel Spa\u00DF!"
};

// translation provided by eversiege and veselcraft
LocalisationMessages_t russian = {
	L"\u041D\u0430\u0447\u0438\u043D\u0430\u0435\u043C \u043F\u0430\u0442\u0447\u0438\u0442\u044C \u0433\u0438\u043F\u0435\u0440\u0432\u0438\u0437\u043E\u0440 \u0438 \u044F\u0434\u0440\u043E...\n\n\u0412\u0430\u0448 \u043A\u043B\u044E\u0447 CPU:\n%S\n\n\u0417\u0430\u043F\u0438\u0448\u0438\u0442\u0435 \u0435\u0433\u043E \u0438 \u0445\u0440\u0430\u043D\u0438\u0442\u0435 \u0432 \u043D\u0430\u0434\u0451\u0436\u043D\u043E\u043C \u043C\u0435\u0441\u0442\u0435!",
	L"OK",
	L"\u0423\u0440\u0430!",
	L"\u0417\u0430\u043F\u0443\u0441\u0442\u0438\u0442\u044C XeLL",
	L"\u041D\u0435\u0432\u043E\u0437\u043C\u043E\u0436\u043D\u043E \u0437\u0430\u043F\u0443\u0442\u0438\u0442\u044C XeLL?! \u041D\u0443 \u0447\u0442\u043E \u0436, \u0432\u0441\u0451 \u0440\u0430\u0432\u043D\u043E \u043F\u0430\u0442\u0447\u0438\u043C HV \u0438 \u044F\u0434\u0440\u043E...",
	L"\u0413\u0438\u043F\u0435\u0440\u0432\u0438\u0437\u043E\u0440 \u0438 \u044F\u0434\u0440\u043E \u0431\u044B\u043B\u0438 \u043F\u0440\u043E\u043F\u0430\u0442\u0447\u0435\u043D\u044B!\n\n\u0412\u0430\u0448 \u043A\u043B\u044E\u0447 CPU:\n%S\n\n\u0418\u0441\u0445\u043E\u0434\u043D\u044B\u0439 \u043A\u043E\u0434 \u0434\u043B\u044F FreeMyXe \u043D\u0430\u0445\u043E\u0434\u0438\u0442\u0441\u044F \u0442\u0443\u0442:\ngithub.com/FreeMyXe/FreeMyXe\n\n\u0412\u0435\u0441\u0435\u043B\u0438\u0442\u0435\u0441\u044C!"
};

// translation provided by Helloyunho
LocalisationMessages_t korean = {
	L"\uD558\uC774\uD37C\uBC14\uC774\uC800\uC640 \uCEE4\uB110 \uD328\uCE58 \uC900\uBE44\uC911...\n\nCPU \uD0A4:\n%S\n\n\uC548\uC804\uD55C\u \uACF3\uC5D0 \uC801\uC5B4\uB450\uC138\uC694!",
	L"\uD655\uC778",
	L"\uC608\uC774!",
	L"XeLL \uC2E4\uD589\uD558\uAE30",
	L"XeLL\uC744 \uC2E4\uD589\uD558\uB294\uB370 \uC2E4\uD328\uD588\uC2B5\uB2C8\uB2E4?! \uBB50, \uC81C\uAC00 \uC9C1\uC811 \uD558\uC774\uD37C\uBC14\uC774\uC800\uC640 \uCEE4\uB110\uC744 \uD328\uCE58\uD560\uAC8C\uC694...",
	L"\uD558\uC774\uD37C\uBC14\uC774\uC800\uC640 \uCEE4\uB110\uC774 \uD328\uCE58\uB418\uC5C8\uC2B5\uB2C8\uB2E4!\n\nCPU \uD0A4:\n%S\n\nFreeMyXe \uC18C\uC2A4 \uCF54\uB4DC:\ngithub.com/FreeMyXe/FreeMyXe\n\n\uC88B\uC740 \uD558\uB8E8 \uB418\uC138\uC694!"
};

// translation provided by Mez0ne
LocalisationMessages_t chinese_simplified = {
	L"\u5373\u5C06\u5F00\u59CB\u4FEE\u8865 Hypervisor \u548C\u5185\u6838...\n\n\u4F60\u7684 CPU \u5BC6\u94A5\u662F\uFF1A\n%S\n\n\u628A\u5B83\u8BB0\u4E0B\u6765\u5E76\u59A5\u5584\u4FDD\u7BA1\uFF01",
	L"OK",
	L"\u8036\uFF01",
	L"\u542F\u52A8 XeLL",
	L"\u672A\u80FD\u542F\u52A8 XeLL\uFF1F\uFF01\u597D\u5427\uFF0C\u4E0D\u7BA1\u600E\u6837\uFF0C\u6211\u90FD\u4F1A\u4FEE\u8865 Hypervisor \u548C\u5185\u6838...",
	L"Hypervisor \u548C\u5185\u6838\u5DF2\u88AB\u4FEE\u8865\uFF01\n\n\u4F60\u7684 CPU \u5BC6\u94A5\u662F\uFF1A\n%S\n\nFreeMyXe \u7684\u6E90\u4EE3\u7801\uFF1A\ngithub.com/FreeMyXe/FreeMyXe\n\n\u73A9\u5F97\u5F00\u5FC3\uFF01"
};

// translation provided by Tozzi89
LocalisationMessages_t swedish = {
	L"Snart b\u00F6rjar patchning av hypervisor och k\u00E4rnan...\n\nDin CPU nyckel \u00E4r:\n%S\n\nSkriv ner och spara p\u00E5 s\u00E4kert st\u00E4lle!",
	L"OK",
	L"Jippi!!",
	L"Starta XeLL ist\u00E4llet",
	L"Kunde inte starta XeLL?! Vi tar och patchar hypervisor och k\u00E4rnan \u00E4nd\u00E5...",
	L"Hypervisor och k\u00E4rnan har blivit patchad!\n\nDin CPU nyckel \u00E4r:\n%S\n\nK\u00E4llkoden f\u00F6r FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nHa s\u00E5 kul!"
};

// translation provided by Razorbacktrack
LocalisationMessages_t italian = {
	L"Sto per iniziare a patchare l'Hypervisor e il kernel...\n\nLa tua CPU Key \u00E8:\n%S\n\nScrivila e conservala accuratamente!",
	L"OK",
	L"Fantastico!",
	L"Avvia XeLL invece",
	L"Non riesco ad avviare XeLL?! Beh, patcher\u00F2 comunque l'Hypervisor e il kernel...",
	L"L'Hypervisor e il kernel sono stati patchati!\n\nLa tua CPU Key \u00E8:\n%S\n\nCodice sorgente di FreeMyXe:\ngithub.com/FreeMyXe/FreeMyXe\n\nDivertiti!"
};