#include "LibtorrentSession.h"

void CC AlertHandler(std::auto_ptr<libtorrent::alert>& al)
{
	libtorrent::alert* a = al->clone().release();
	RunCallBack(a);
}

void CC RunCallBack(libtorrent::alert * a)
{
	if (_callback) _callback(a);
}

TSUNAMIBRIDGE_API void CC Session_Create()
{
	if (!_session)
	{
		_session = new libtorrent::session();
	}
}

TSUNAMIBRIDGE_API void CC Session_Destroy()
{
	if (_session)
	{
		delete _session;
		_session = nullptr;
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

TSUNAMIBRIDGE_API libtorrent::torrent_handle *	CC Session_FindTorrent(libtorrent::sha1_hash * info_hash)
{
	libtorrent::torrent_handle h = _session->find_torrent(*info_hash);
	if(h.is_valid())
		return new libtorrent::torrent_handle(h);
	return new libtorrent::torrent_handle();
}

TSUNAMIBRIDGE_API libtorrent::torrent_handle *CC Session_AddTorrent(libtorrent::add_torrent_params * params)
{
	libtorrent::error_code ec;
	libtorrent::torrent_handle h = _session->add_torrent(*params, ec);
	if (ec) 
		return new libtorrent::torrent_handle();
	return new libtorrent::torrent_handle(h);
}

TSUNAMIBRIDGE_API void CC Session_AsyncAddTorrent(libtorrent::add_torrent_params * params)
{
	_session->async_add_torrent(*params);
}

TSUNAMIBRIDGE_API void CC Session_SetCallback(ProgressCallback progressCallback)
{
	_callback = progressCallback;
	_session->set_alert_dispatch(AlertHandler);
}

TSUNAMIBRIDGE_API void CC Session_ClearCallback()
{
	typedef boost::function<void(std::auto_ptr<libtorrent::alert>)> dispatch_func_t;
	_session->set_alert_dispatch(dispatch_func_t());
	_callback = nullptr;
}
