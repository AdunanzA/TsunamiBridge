#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/alert.hpp>
#include <libtorrent/alert_types.hpp>
#include <libtorrent/torrent_handle.hpp>
#include <libtorrent/sha1_hash.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_handle *			CC	Alert_TorrentAlert_TorrentHandle_Get(libtorrent::torrent_alert * al);
TSUNAMIBRIDGE_API libtorrent::sha1_hash		*			CC	Alert_PeerAlert_Pid_Get(libtorrent::peer_alert * al);
TSUNAMIBRIDGE_API void									CC	Alert_TrackerAlert_Url_Get(libtorrent::tracker_alert * al, char * s, int size);


