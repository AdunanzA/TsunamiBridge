#pragma once

#include <libtorrent/entry.hpp>
#include <map>
#include <string>
#include <list>

class CLibtorrentEntry
{
public:
	CLibtorrentEntry();
	virtual ~CLibtorrentEntry();
	CLibtorrentEntry(std::map<std::string, libtorrent::entry> & entry);
	CLibtorrentEntry(std::string & entry);
	CLibtorrentEntry(std::list<libtorrent::entry> & entry);
	CLibtorrentEntry(int entry);
private:
	libtorrent::entry * entry_;
};

