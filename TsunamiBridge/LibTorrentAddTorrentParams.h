#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/add_torrent_params.hpp>
#include <libtorrent/torrent_info.hpp>
#include <libtorrent/sha1_hash.hpp>

TSUNAMIBRIDGE_API libtorrent::add_torrent_params	*	CC	AddTorrentParams_Create();
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Destroy(libtorrent::add_torrent_params * params_);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Name_Get(libtorrent::add_torrent_params * params_, char * s,int size);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Name_Set(libtorrent::add_torrent_params * params_, const char * s);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_SavePath_Get(libtorrent::add_torrent_params * params_, char * s, int size);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_SavePath_Set(libtorrent::add_torrent_params * params_, const char * s);
TSUNAMIBRIDGE_API libtorrent::torrent_info			*	CC	AddTorrentParams_TorrentInfo_Get(libtorrent::add_torrent_params * params_);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_TorrentInfo_Set(libtorrent::add_torrent_params * params_, libtorrent::torrent_info * ti);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Flags_Set(libtorrent::add_torrent_params * params_, unsigned int flags);
TSUNAMIBRIDGE_API unsigned int							CC	AddTorrentParams_Flags_Get(libtorrent::add_torrent_params * params_);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Url_Set(libtorrent::add_torrent_params * params_, const char * s);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Url_Get(libtorrent::add_torrent_params * params_, char * s, int size);
TSUNAMIBRIDGE_API libtorrent::sha1_hash				*	CC	AddTorrentParams_Sha1Hash_Get(libtorrent::add_torrent_params * params_);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Sha1Hash_Set(libtorrent::add_torrent_params * params_, libtorrent::sha1_hash * hash);
TSUNAMIBRIDGE_API void									CC	AddTorrentParams_Trackers_Get(libtorrent::add_torrent_params * params_, char ** array);
