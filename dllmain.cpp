#include "includes.h"

// extern "C" __declspec (dllexport) int novolinelol(int code, WPARAM wParam, LPARAM lParam) { return CallNextHookEx(NULL, code, wParam, lParam); }

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		novoline::init();
	}

	return TRUE;
}