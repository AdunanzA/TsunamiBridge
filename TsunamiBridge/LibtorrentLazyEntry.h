#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/lazy_entry.hpp>


TSUNAMIBRIDGE_API libtorrent::lazy_entry	*	CC	LazyEntry_Create();
TSUNAMIBRIDGE_API libtorrent::lazy_entry	*	CC	LazyEntry_Create2(libtorrent::lazy_entry * le);
TSUNAMIBRIDGE_API void							CC	LazyEntry_Destroy(libtorrent::lazy_entry * le);
