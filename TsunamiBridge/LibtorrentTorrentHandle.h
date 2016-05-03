#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/torrent_handle.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_handle	*	CC	TorrenHandle_Create();
TSUNAMIBRIDGE_API void								CC	TorrenHandle_Destroy(libtorrent::torrent_handle * handle);
TSUNAMIBRIDGE_API bool								CC	TorrenHandle_IsValid(libtorrent::torrent_handle * handle);