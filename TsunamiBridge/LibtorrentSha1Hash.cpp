#include "LibtorrentSha1Hash.h"

TSUNAMIBRIDGE_API libtorrent::sha1_hash * CC Sha1Hash_Create()
{
	return new libtorrent::sha1_hash();
}

TSUNAMIBRIDGE_API void CC Sha1Hash_Destroy(libtorrent::sha1_hash * hash)
{
	delete hash;
	hash = nullptr;
}
