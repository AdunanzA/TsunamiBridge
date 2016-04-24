// Il seguente blocco ifdef rappresenta il modo standard di creare macro che semplificano 
// l'esportazione da una DLL. Tutti i file all'interno della DLL sono compilati con il simbolo TSUNAMIBRIDGE_EXPORTS
// definito nella riga di comando. Questo simbolo non deve essere definito in alcun progetto
// che utilizza questa DLL. In questo modo qualsiasi altro progetto i cui file di origine includono questo file vedranno le funzioni 
// TSUNAMIBRIDGE_API come importate da una DLL, mentre la DLL vedrà i simboli
// definiti con questa macro come esportati.
#ifdef _WIN32
	#ifdef TSUNAMIBRIDGE_EXPORTS
		#define TSUNAMIBRIDGE_API __declspec(dllexport)
	#else
		#define TSUNAMIBRIDGE_API __declspec(dllimport)
	#endif
	#define CC	__cdecl
#else
	#define TSUNAMIBRIDGE_API
	#define CC __attribute__((cdecl))
#endif // _WIN32

/*
TSUNAMIBRIDGE_API void		CC 	Session_Create();
TSUNAMIBRIDGE_API void		CC 	Session_Destroy();
TSUNAMIBRIDGE_API void		CC 	Session_LoadState(void * lazy_entry);
TSUNAMIBRIDGE_API void		CC 	Session_SaveState(void * entry, unsigned int flags);
TSUNAMIBRIDGE_API void		CC 	Session_PostTorrentUpdates();
TSUNAMIBRIDGE_API void	*	CC 	Session_FindTorrent(void * info_hash);*/