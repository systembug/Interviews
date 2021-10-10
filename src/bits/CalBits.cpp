//
// Created by cys on 21. 10. 10..
//

#include "CalBits.h"

namespace Interviews {
    bool CalBits::init() {

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

    }
}