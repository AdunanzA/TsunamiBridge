#ifdef _WIN32
	#ifdef TSUNAMIBRIDGE_EXPORTS
		#define TSUNAMIBRIDGE_API __declspec(dllexport)
	#else
		#define TSUNAMIBRIDGE_API __declspec(dllimport)
	#endif
	#define CC	__stdcall
#else
	#define TSUNAMIBRIDGE_API
	#define CC __attribute__((stdcall))
#endif // _WIN32
