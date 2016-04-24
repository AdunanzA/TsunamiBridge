#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/add_torrent_params.hpp>
#include <libtorrent/torrent_info.hpp>

TSUNAMIBRIDGE_API libtorrent::add_torrent_params	*	CC	AddTorrentParams_Create();
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Destroy(libtorrent::add_torrent_params * atp);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Name_Get(libtorrent::add_torrent_params * params_, char * s,int size);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Name_Set(libtorrent::add_torrent_params * params_, const char * s);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_SavePath_Get(libtorrent::add_torrent_params * params_, char * s, int size);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_SavePath_Set(libtorrent::add_torrent_params * params_, const char * s);
TSUNAMIBRIDGE_API libtorrent::torrent_info			*	CC	AddTorrentParams_TorrentInfo_Get(libtorrent::add_torrent_params * params_);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_TorrentInfo_Set(libtorrent::add_torrent_params * params_, libtorrent::torrent_info * ti);