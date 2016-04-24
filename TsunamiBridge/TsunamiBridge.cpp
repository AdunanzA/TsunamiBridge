// TsunamiBridge.cpp: definisce le funzioni esportate per l'applicazione DLL.
//

#include "stdafx.h"
#include "TsunamiBridge.h"
#include "LibtorrentSession.h"
#include "LibtorrentLazyEntry.h"

#ifdef _WIN32
BOOL APIENTRY DllMain(HMODULE hModule,	DWORD  ul_reason_for_call,	LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
#endif // _WIN32
