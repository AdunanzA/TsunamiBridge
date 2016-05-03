#include "LibtorrentSession.h"


#define ALERT_CASE(alert_name) \
    case libtorrent::alert_name::alert_type: \
    { \
        libtorrent::alert_name* tmp = libtorrent::alert_cast<libtorrent::alert_name>(a); \
        RunCallBack(alert_name(tmp)); \
    } break;


void CC AlertHandler(std::auto_ptr<libtorrent::alert>& al)
{
	libtorrent::alert* a = al->clone().release();
	
	switch (a->type())
	{
		/*ALERT_CASE(torrent_added_alert);
		ALERT_CASE(torrent_removed_alert);
		ALERT_CASE(torrent_finished_alert);
		ALERT_CASE(state_update_alert);
		ALERT_CASE(read_piece_alert);
		ALERT_CASE(file_completed_alert);
		ALERT_CASE(file_renamed_alert);
		ALERT_CASE(file_rename_failed_alert);
		ALERT_CASE(performance_alert);
		ALERT_CASE(state_changed_alert);
		ALERT_CASE(tracker_error_alert);
		ALERT_CASE(tracker_warning_alert);
		ALERT_CASE(scrape_reply_alert);
		ALERT_CASE(scrape_failed_alert);
		ALERT_CASE(tracker_reply_alert);
		ALERT_CASE(dht_reply_alert);
		ALERT_CASE(tracker_announce_alert);
		ALERT_CASE(hash_failed_alert);
		ALERT_CASE(peer_ban_alert);
		ALERT_CASE(peer_unsnubbed_alert);
		ALERT_CASE(peer_snubbed_alert);
		ALERT_CASE(peer_error_alert);
		ALERT_CASE(peer_connect_alert);
		ALERT_CASE(peer_disconnected_alert);
		ALERT_CASE(invalid_request_alert);
		ALERT_CASE(piece_finished_alert);
		ALERT_CASE(request_dropped_alert);
		ALERT_CASE(block_timeout_alert);
		ALERT_CASE(block_finished_alert);
		ALERT_CASE(block_downloading_alert);
		ALERT_CASE(unwanted_block_alert);
		ALERT_CASE(storage_moved_alert);
		ALERT_CASE(storage_moved_failed_alert);
		ALERT_CASE(torrent_deleted_alert);
		ALERT_CASE(torrent_delete_failed_alert);
		ALERT_CASE(save_resume_data_alert);
		ALERT_CASE(save_resume_data_failed_alert);
		ALERT_CASE(torrent_paused_alert);
		ALERT_CASE(torrent_resumed_alert);
		ALERT_CASE(torrent_checked_alert);
		ALERT_CASE(url_seed_alert);
		ALERT_CASE(file_error_alert);
		ALERT_CASE(metadata_failed_alert);
		ALERT_CASE(metadata_received_alert);
		ALERT_CASE(udp_error_alert);
		ALERT_CASE(external_ip_alert);
		ALERT_CASE(listen_failed_alert);
		ALERT_CASE(listen_succeeded_alert);
		ALERT_CASE(portmap_error_alert);
		ALERT_CASE(portmap_alert);
		ALERT_CASE(portmap_log_alert);
		ALERT_CASE(fastresume_rejected_alert);
		ALERT_CASE(peer_blocked_alert);
		ALERT_CASE(dht_announce_alert);
		ALERT_CASE(dht_get_peers_alert);
		ALERT_CASE(stats_alert);
		ALERT_CASE(cache_flushed_alert);
		ALERT_CASE(anonymous_mode_alert);
		ALERT_CASE(lsd_peer_alert);
		ALERT_CASE(trackerid_alert);
		ALERT_CASE(dht_bootstrap_alert);
		ALERT_CASE(rss_alert);
		ALERT_CASE(torrent_error_alert);
		ALERT_CASE(torrent_need_cert_alert);
		ALERT_CASE(incoming_connection_alert);
		ALERT_CASE(add_torrent_alert);
		ALERT_CASE(torrent_update_alert);
		ALERT_CASE(rss_item_alert);
		ALERT_CASE(dht_error_alert);
		ALERT_CASE(dht_immutable_item_alert);
		ALERT_CASE(dht_mutable_item_alert);
		ALERT_CASE(dht_put_alert);
		ALERT_CASE(i2p_alert);*/
	default: RunCallBack(a);
	}
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

TSUNAMIBRIDGE_API void CC Session_AsyncAddTorrent(libtorrent::add_torrent_params * params)
{
	_session->async_add_torrent(*params);
}

TSUNAMIBRIDGE_API void CC Session_SetCallback(ProgressCallback progressCallback)
{
	_callback = progressCallback;
	_session->set_alert_dispatch(AlertHandler);
}
