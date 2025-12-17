#pragma once

#include <stdint.h>

#define swaps(x)                    \
          ((x << 8) & 0xff00 )         \
        | ((x >> 8) & 0x00ff )

#define swapl(x)                    \
         ((x << 24) & 0xff000000 )     \
        |((x << 8)  & 0x00ff0000 )      \
        |((x >> 8)  & 0x0000ff00 )      \
        |((x >> 24) & 0x000000ff )

static inline uint64_t swapll(uint64_t x){
    uint64_t first_half = (uint64_t) swapl((uint32_t) x);
    uint64_t second_half = (uint64_t) swapl((uint32_t) (x >> 32));

    uint64_t res = first_half << 32 | second_half;
    return res; 
}