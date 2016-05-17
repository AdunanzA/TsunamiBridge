#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/torrent_handle.hpp>
#include <libtorrent/torrent_status.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_handle	*	CC	TorrentHandle_Create();
TSUNAMIBRIDGE_API void								CC	TorrentHandle_Destroy(libtorrent::torrent_handle * handle);
TSUNAMIBRIDGE_API bool								CC	TorrentHandle_IsValid(libtorrent::torrent_handle * handle);
TSUNAMIBRIDGE_API libtorrent::torrent_status	*	CC	TorrentHandle_Status(libtorrent::torrent_handle * handle, unsigned int flags);