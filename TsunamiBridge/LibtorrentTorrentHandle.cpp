#include "LibtorrentTorrentHandle.h"

TSUNAMIBRIDGE_API libtorrent::torrent_handle *CC TorrenHandle_Create()
{
	return new libtorrent::torrent_handle();
}

TSUNAMIBRIDGE_API void CC TorrenHandle_Destroy(libtorrent::torrent_handle * handle)
{
	delete handle;
	handle = nullptr;
}

TSUNAMIBRIDGE_API bool CC TorrenHandle_IsValid(libtorrent::torrent_handle * handle)
{
	return handle->is_valid();
}
