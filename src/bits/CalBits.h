//
// Created by cys on 21. 10. 10..
//

#ifndef INTERVIEWS_CALBITS_H
#define INTERVIEWS_CALBITS_H

#include <cstdint>

namespace Interviews {
    class CalBits {
    public:
        ~CalBits() = default;

    public:
        bool init();
        uint16_t process(uint64_t x);
        bool release();
    };
}


#endif //INTERVIEWS_CALBITS_H
