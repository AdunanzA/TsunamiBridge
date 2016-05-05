#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/alert.hpp>

TSUNAMIBRIDGE_API void					CC	Alert_Destroy(libtorrent::alert * al);
TSUNAMIBRIDGE_API void					CC	Alert_What_Get(libtorrent::alert * al,char * s, int size);
TSUNAMIBRIDGE_API void					CC	Alert_Message_Get(libtorrent::alert * al, char * s, int size);
TSUNAMIBRIDGE_API int					CC	Alert_Type_Get(libtorrent::alert * al);
TSUNAMIBRIDGE_API int					CC	Alert_Category_Get(libtorrent::alert * al);