#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/torrent_info.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_info	*	CC	TorrentInfo_Create(const char * filename);
TSUNAMIBRIDGE_API void							CC	TorrentInfo_Destroy(libtorrent::torrent_info * ti);
