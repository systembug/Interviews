//
// Created by cys on 21. 10. 10..
//

#include "gtest/gtest.h"
#include "../../src/bits/CalBits.h"

namespace interviews::tests::bits {
    TEST(CalBits, basic_test) {
        interviews::bits::CalBits calBits;
        calBits.init();
        EXPECT_EQ(1, 1);
        calBits.release();
    }
}