#include "LibtorrentLazyEntry.h"



CLibtorrentLazyEntry::CLibtorrentLazyEntry()
{
	lazy_entry_ = new libtorrent::lazy_entry();
}

CLibtorrentLazyEntry::CLibtorrentLazyEntry(libtorrent::lazy_entry & le)
{
	lazy_entry_ = new libtorrent::lazy_entry();
	lazy_entry_->swap(le);
}

CLibtorrentLazyEntry::~CLibtorrentLazyEntry()
{
	delete lazy_entry_;
}
