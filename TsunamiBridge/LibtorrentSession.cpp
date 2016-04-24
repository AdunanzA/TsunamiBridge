#include "LibtorrentSession.h"

TSUNAMIBRIDGE_API void CC Session_Create()
{
	_session = new libtorrent::session();
}

TSUNAMIBRIDGE_API void CC Session_Destroy()
{
	if (_session)
	{
		delete _session;
		_session = NULL;
	}
}

TSUNAMIBRIDGE_API void CC Session_LoadState(libtorrent::lazy_entry * lazy_entry)
{
	_session->load_state(*lazy_entry);
}

TSUNAMIBRIDGE_API void CC Session_SaveState(libtorrent::entry * entry, unsigned int flags)
{
	_session->save_state(*entry, flags);
}

TSUNAMIBRIDGE_API void CC Session_PostTorrentUpdates()
{
	_session->post_torrent_updates();
}

TSUNAMIBRIDGE_API libtorrent::torrent_handle CC Session_FindTorrent(libtorrent::sha1_hash * info_hash)
{
	return _session->find_torrent(*info_hash);
}

TSUNAMIBRIDGE_API void CC Session_AsyncAddTorrent(libtorrent::add_torrent_params * params)
{
	_session->async_add_torrent(*params);
}
