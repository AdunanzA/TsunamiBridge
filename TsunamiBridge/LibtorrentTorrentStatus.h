#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/torrent_status.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_status *	CC	 TorrentStatus_Create();
TSUNAMIBRIDGE_API void							CC	 TorrentStatus_Destroy(libtorrent::torrent_status * status);