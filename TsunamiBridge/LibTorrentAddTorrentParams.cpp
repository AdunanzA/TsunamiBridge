#include "LibTorrentAddTorrentParams.h"

TSUNAMIBRIDGE_API libtorrent::add_torrent_params * AddTorrentParams_Create()
{
	return new libtorrent::add_torrent_params();
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Destroy(libtorrent::add_torrent_params * atp)
{
	delete atp;
	atp = NULL;
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Name_Get(libtorrent::add_torrent_params * params_, char * s,int size)
{
	strncpy(s, params_->name.c_str(), size);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Name_Set(libtorrent::add_torrent_params * params_, const char * s)
{
	params_->name.assign(s);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_SavePath_Get(libtorrent::add_torrent_params * params_, char * s, int size)
{
	strncpy(s, params_->save_path.c_str(), size);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_SavePath_Set(libtorrent::add_torrent_params * params_, const char * s)
{
	params_->save_path.assign(s);
}


TSUNAMIBRIDGE_API libtorrent::torrent_info * CC AddTorrentParams_TorrentInfo_Get(libtorrent::add_torrent_params * params_)
{
	return params_->ti.get();
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_TorrentInfo_Set(libtorrent::add_torrent_params * params_, libtorrent::torrent_info * ti)
{
	params_->ti = boost::shared_ptr<libtorrent::torrent_info>(new libtorrent::torrent_info(*ti));
}
