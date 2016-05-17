#include "LibtorrentErrorCode.h"

TSUNAMIBRIDGE_API libtorrent::error_code *CC ErrorCode_Create()
{
	return new libtorrent::error_code();
}

TSUNAMIBRIDGE_API void CC ErrorCode_Destroy(libtorrent::error_code * e)
{
	delete e;
	e = nullptr;
}

TSUNAMIBRIDGE_API void CC ErrorCode_Message_Get(libtorrent::error_code * e, char * s, int size)
{
	strncpy(s, e->message().c_str(), size);
}

TSUNAMIBRIDGE_API int CC ErrorCode_Value_Get(libtorrent::error_code * e)
{
	return e->value();
}
