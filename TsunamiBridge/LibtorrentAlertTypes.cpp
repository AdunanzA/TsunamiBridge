#include "LibtorrentAlertTypes.h"

TSUNAMIBRIDGE_API libtorrent::torrent_handle *CC Alert_TorrentAlert_TorrentHandle_Get(libtorrent::torrent_alert * al)
{
	return new libtorrent::torrent_handle(al->handle);
}

TSUNAMIBRIDGE_API libtorrent::sha1_hash *CC Alert_PeerAlert_Pid_Get(libtorrent::peer_alert * al)
{
	return new libtorrent::sha1_hash(al->pid);
}

TSUNAMIBRIDGE_API void CC Alert_TrackerAlert_Url_Get(libtorrent::tracker_alert * al, char * s, int size)
{
	strncpy(s, al->url.c_str(), size);
}

TSUNAMIBRIDGE_API unsigned int CC Alert_ReadPieceAlert_Buffer_Size_Get(libtorrent::read_piece_alert * al)
{
	return al->size;
}

TSUNAMIBRIDGE_API int CC Alert_ReadPieceAlert_Piece_Get(libtorrent::read_piece_alert * al)
{
	return al->piece;
}

TSUNAMIBRIDGE_API int CC Alert_FileCompletedAlert_Index_Get(libtorrent::file_completed_alert * al)
{
	return al->index;
}

TSUNAMIBRIDGE_API void CC Alert_FileRenamedAlert_Name_Get(libtorrent::file_renamed_alert * al, char * s, int size)
{
	strncpy(s, al->name.c_str(), size);
}

TSUNAMIBRIDGE_API int CC Alert_FileRenamedAlert_Index_Get(libtorrent::file_completed_alert * al)
{
	return al->index;
}

TSUNAMIBRIDGE_API int CC Alert_FileRenameFailedAlert_Index_Get(libtorrent::file_rename_failed_alert * al)
{
	return al->index;
}

TSUNAMIBRIDGE_API libtorrent::error_code *CC Alert_FileRenameFailedAlert_Error_Get(libtorrent::file_rename_failed_alert * al)
{
	return new libtorrent::error_code(al->error);
}

TSUNAMIBRIDGE_API unsigned int CC Alert_PerformanceAlert_WarningCode_Get(libtorrent::performance_alert * al)
{
	return al->warning_code;
}


TSUNAMIBRIDGE_API void CC Alert_ReadPieceAlert_Buffer_Get(libtorrent::read_piece_alert * al, char * buff, unsigned int size)
{
	memcpy(buff, al->buffer.get(), size);
}
