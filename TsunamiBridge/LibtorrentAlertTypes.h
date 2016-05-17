#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/alert.hpp>
#include <libtorrent/alert_types.hpp>
#include <libtorrent/torrent_handle.hpp>
#include <libtorrent/sha1_hash.hpp>

TSUNAMIBRIDGE_API libtorrent::torrent_handle *			CC	Alert_TorrentAlert_TorrentHandle_Get(libtorrent::torrent_alert * al);
TSUNAMIBRIDGE_API libtorrent::sha1_hash		*			CC	Alert_PeerAlert_Pid_Get(libtorrent::peer_alert * al);
TSUNAMIBRIDGE_API void									CC	Alert_TrackerAlert_Url_Get(libtorrent::tracker_alert * al, char * s, int size);
TSUNAMIBRIDGE_API unsigned int							CC  Alert_ReadPieceAlert_Buffer_Size_Get(libtorrent::read_piece_alert * al);
TSUNAMIBRIDGE_API void									CC	Alert_ReadPieceAlert_Buffer_Get(libtorrent::read_piece_alert * al, int * buff, unsigned int size);
TSUNAMIBRIDGE_API int									CC  Alert_ReadPieceAlert_Piece_Get(libtorrent::read_piece_alert * al);
TSUNAMIBRIDGE_API int									CC  Alert_FileCompletedAlert_Index_Get(libtorrent::file_completed_alert * al);
TSUNAMIBRIDGE_API void									CC	Alert_FileRenamedAlert_Name_Get(libtorrent::file_renamed_alert * al, char * s, int size);
TSUNAMIBRIDGE_API int									CC  Alert_FileRenamedAlert_Index_Get(libtorrent::file_completed_alert * al);
TSUNAMIBRIDGE_API int									CC  Alert_FileRenameFailedAlert_Index_Get(libtorrent::file_rename_failed_alert * al);
TSUNAMIBRIDGE_API libtorrent::error_code *				CC  Alert_FileRenameFailedAlert_Error_Get(libtorrent::file_rename_failed_alert * al);
TSUNAMIBRIDGE_API unsigned int							CC  Alert_PerformanceAlert_WarningCode_Get(libtorrent::performance_alert * al);









