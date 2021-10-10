//
// Created by cys on 21. 10. 10..
//

#ifndef INTERVIEWS_BITS_CALBITS_H
#define INTERVIEWS_BITS_CALBITS_H

#include <cstdint>

namespace interviews::bits {
    class CalBits {
    public:
        ~CalBits() = default;

    public:
        bool init();
        uint16_t process(uint64_t x);
        bool release();
    };
}


#endif //INTERVIEWS_BITS_CALBITS_H
