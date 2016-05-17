#pragma once
#include "TsunamiBridge.h"
#include <libtorrent/error_code.hpp>


TSUNAMIBRIDGE_API libtorrent::error_code *	CC	ErrorCode_Create();
TSUNAMIBRIDGE_API void						CC	ErrorCode_Destroy(libtorrent::error_code * e);
TSUNAMIBRIDGE_API void						CC	ErrorCode_Message_Get(libtorrent::error_code * e, char * s, int size);
TSUNAMIBRIDGE_API int						CC	ErrorCode_Value_Get(libtorrent::error_code * e);
