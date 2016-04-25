#pragma once

#include "TsunamiBridge.h"
#include <libtorrent/entry.hpp>

TSUNAMIBRIDGE_API libtorrent::entry	*		CC	Entry_Create();
TSUNAMIBRIDGE_API void						CC	Entry_Destroy(libtorrent::entry * e);

/*
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
*/
