#include "LibTorrentAddTorrentParams.h"

TSUNAMIBRIDGE_API libtorrent::add_torrent_params * CC AddTorrentParams_Create()
{
	return new libtorrent::add_torrent_params();
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Destroy(libtorrent::add_torrent_params * params_)
{
	delete params_;
	params_ = nullptr;
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

TSUNAMIBRIDGE_API void CC AddTorrentParams_Flags_Set(libtorrent::add_torrent_params * params_, unsigned int flags)
{
	params_->flags = flags;
}

TSUNAMIBRIDGE_API unsigned int CC AddTorrentParams_Flags_Get(libtorrent::add_torrent_params * params_)
{
	return static_cast<unsigned int>(params_->flags);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Url_Set(libtorrent::add_torrent_params * params_, const char * s)
{
	params_->url.assign(s);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Url_Get(libtorrent::add_torrent_params * params_, char * s, int size)
{
	strncpy(s, params_->url.c_str(), size);
}

TSUNAMIBRIDGE_API libtorrent::sha1_hash *CC AddTorrentParams_Sha1Hash_Get(libtorrent::add_torrent_params * params_)
{
	return new libtorrent::sha1_hash(params_->info_hash);
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Sha1Hash_Set(libtorrent::add_torrent_params * params_, libtorrent::sha1_hash * hash)
{
	params_->info_hash = *hash;
}

TSUNAMIBRIDGE_API unsigned int CC AddTorrentParams_Trackers_Size_Get(libtorrent::add_torrent_params * params_)
{
	return params_->trackers.size();
}

TSUNAMIBRIDGE_API void CC AddTorrentParams_Trackers_Get(libtorrent::add_torrent_params * params_, char ** array, unsigned int size)
{
	for (size_t i = 0; i <= size; i++)
	{
		strcpy(array[i], params_->trackers[i].c_str());
	}
}
