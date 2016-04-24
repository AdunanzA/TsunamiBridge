#include "LibtorrentEntry.h"

CLibtorrentEntry::CLibtorrentEntry()
{
	entry_ = new libtorrent::entry();
}

CLibtorrentEntry::~CLibtorrentEntry()
{
	delete entry_;
}

CLibtorrentEntry::CLibtorrentEntry(std::map<std::string, libtorrent::entry> & entry)
{
	entry_ = new libtorrent::entry(entry);
}

CLibtorrentEntry::CLibtorrentEntry(std::string & entry)
{
	entry_ = new libtorrent::entry(entry);
}

CLibtorrentEntry::CLibtorrentEntry(std::list<libtorrent::entry> & entry)
{
	entry_ = new libtorrent::entry(entry);
}

CLibtorrentEntry::CLibtorrentEntry(int entry)
{
	entry_ = new libtorrent::entry(entry);
}
