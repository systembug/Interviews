//
// Created by cys on 21. 10. 10..
//

#include "CalBits.h"
#include "../../src/bits/CalBits.h"

namespace interviews::bits {
    bool CalBits::init() {
        return false;
    }

    uint16_t CalBits::process(uint64_t x) {
        x ^= x >> 32;
        x ^= x >> 16;
        x ^= x >> 8;
        x ^= x >> 4;
        x ^= x >> 2;
        x ^= x >> 1;
        return x & 0x1;
    }

    bool CalBits::release() {
        return false;
    }
}