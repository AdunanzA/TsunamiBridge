#include "LibtorrentLazyEntry.h"


TSUNAMIBRIDGE_API libtorrent::lazy_entry *CC LazyEntry_Create()
{
	return new libtorrent::lazy_entry();
}

TSUNAMIBRIDGE_API libtorrent::lazy_entry *CC LazyEntry_Create2(libtorrent::lazy_entry * le)
{
	libtorrent::lazy_entry *tmp = new libtorrent::lazy_entry();
	tmp->swap(*le);
	return tmp;
}

TSUNAMIBRIDGE_API void	CC LazyEntry_Destroy(libtorrent::lazy_entry * le)
{
	delete le;
	le = nullptr;
}
