#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/session.hpp>

static libtorrent::session *_session = nullptr;

TSUNAMIBRIDGE_API void							CC 	Session_Create();
TSUNAMIBRIDGE_API void							CC 	Session_Destroy();
TSUNAMIBRIDGE_API void							CC 	Session_LoadState(libtorrent::lazy_entry * lazy_entry);
TSUNAMIBRIDGE_API void							CC 	Session_SaveState(libtorrent::entry *entry, unsigned int flags);
TSUNAMIBRIDGE_API void							CC 	Session_PostTorrentUpdates();
TSUNAMIBRIDGE_API libtorrent::torrent_handle	CC 	Session_FindTorrent(libtorrent::sha1_hash * info_hash);
TSUNAMIBRIDGE_API void							CC 	Session_AsyncAddTorrent(libtorrent::add_torrent_params * params);

