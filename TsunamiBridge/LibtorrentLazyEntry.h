#pragma once

#include <libtorrent/lazy_entry.hpp>

class CLibtorrentLazyEntry
{
public:
	CLibtorrentLazyEntry();
	CLibtorrentLazyEntry(libtorrent::lazy_entry & le);
	virtual ~CLibtorrentLazyEntry();
private:
	libtorrent::lazy_entry * lazy_entry_;
};

