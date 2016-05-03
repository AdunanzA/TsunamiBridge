#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/entry.hpp>

TSUNAMIBRIDGE_API libtorrent::entry	*		CC	Entry_Create();
TSUNAMIBRIDGE_API void						CC	Entry_Destroy(libtorrent::entry * e);

