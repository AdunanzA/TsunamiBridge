#include "LibtorrentTorrentStatus.h"

TSUNAMIBRIDGE_API libtorrent::torrent_status *CC TorrentStatus_Create()
{
	return new libtorrent::torrent_status();
}

TSUNAMIBRIDGE_API void CC TorrentStatus_Destroy(libtorrent::torrent_status * status)
{
	delete status;
	status = nullptr;
}
