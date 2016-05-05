#include "LibtorrentAlertTypes.h"

TSUNAMIBRIDGE_API libtorrent::torrent_handle *CC Alert_TorrentAlert_TorrentHandle_Get(libtorrent::torrent_alert * al)
{
	return new libtorrent::torrent_handle(al->handle);
}

TSUNAMIBRIDGE_API libtorrent::sha1_hash *CC Alert_PeerAlert_Pid_Get(libtorrent::peer_alert * al)
{
	return new libtorrent::sha1_hash(al->pid);
}

TSUNAMIBRIDGE_API void CC Alert_TrackerAlert_Url_Get(libtorrent::tracker_alert * al, char * s, int size)
{
	strncpy(s, al->url.c_str(), size);
}
