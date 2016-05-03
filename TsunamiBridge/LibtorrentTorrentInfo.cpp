#include "LibtorrentTorrentInfo.h"

libtorrent::torrent_info * CC TorrentInfo_Create(const char * filename)
{
	return new libtorrent::torrent_info(filename);
}

void CC TorrentInfo_Destroy(libtorrent::torrent_info * ti)
{
	delete ti;
	ti = nullptr;
}