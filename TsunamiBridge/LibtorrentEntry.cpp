#include "LibtorrentEntry.h"


TSUNAMIBRIDGE_API libtorrent::entry *CC Entry_Create()
{
	return new libtorrent::entry();
}

TSUNAMIBRIDGE_API void CC Entry_Destroy(libtorrent::entry * e)
{
	delete e;
	e = nullptr;
}
