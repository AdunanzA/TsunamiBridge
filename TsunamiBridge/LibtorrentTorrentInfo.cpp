#include "LibtorrentTorrentInfo.h"

libtorrent::torrent_info * TorrentInfo_Create(const char * filename)
{
	return new libtorrent::torrent_info(std::string(filename));
}

void TorrentInfo_Destroy(libtorrent::torrent_info * ti)
{
	delete ti;
	ti = NULL;
}