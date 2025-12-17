#ifndef        _ENDIAN_H
#define        _ENDIAN_H        1

#include "byteswap.h"

#  define htobe16(x) swaps( x )
#  define htole16(x) (x)
#  define be16toh(x) swaps (x)
#  define le16toh(x) (x)

#  define htobe32(x) swapl (x)
#  define htole32(x) (x)
#  define be32toh(x) swapl (x)
#  define le32toh(x) (x)

//NOT IMPLEMENTED YET!!
#  define htobe64(x) swapll(x)
#  define htole64(x) (x)
#  define be64toh(x) swapll(x)
#  define le64toh(x) (x)

#endif        /* endian.h */