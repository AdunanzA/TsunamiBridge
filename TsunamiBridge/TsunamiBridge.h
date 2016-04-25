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
