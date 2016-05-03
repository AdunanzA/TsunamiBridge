#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/sha1_hash.hpp>

TSUNAMIBRIDGE_API libtorrent::sha1_hash *	CC 	Sha1Hash_Create();
TSUNAMIBRIDGE_API void 						CC 	Sha1Hash_Destroy(libtorrent::sha1_hash * hash);