#include "LibTorrentAlert.h"

TSUNAMIBRIDGE_API void CC Alert_Destroy(libtorrent::alert * al)
{
	delete al;
	al = nullptr;
}

TSUNAMIBRIDGE_API void CC Alert_What_Get(libtorrent::alert * al, char * s, int size)
{
	strncpy(s, al->what(), size);
}

TSUNAMIBRIDGE_API void CC Alert_Message_Get(libtorrent::alert * al, char * s, int size)
{
	strncpy(s, al->message().c_str(), size);
}

TSUNAMIBRIDGE_API int CC Alert_Type_Get(libtorrent::alert * al)
{
	return al->type();
}

TSUNAMIBRIDGE_API int CC Alert_Category_Get(libtorrent::alert * al)
{
	return al->category();
}
