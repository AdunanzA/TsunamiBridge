#include "LibtorrentTorrentHandle.h"

TSUNAMIBRIDGE_API libtorrent::torrent_handle *CC TorrentHandle_Create()
{
	return new libtorrent::torrent_handle();
}

TSUNAMIBRIDGE_API void CC TorrentHandle_Destroy(libtorrent::torrent_handle * handle)
{
	delete handle;
	handle = nullptr;
}

TSUNAMIBRIDGE_API bool CC TorrentHandle_IsValid(libtorrent::torrent_handle * handle)
{
	return handle->is_valid();
}

TSUNAMIBRIDGE_API libtorrent::torrent_status *CC TorrentHandle_Status(libtorrent::torrent_handle * handle, unsigned int flags)
{
	return new libtorrent::torrent_status(handle->status(flags));
}
