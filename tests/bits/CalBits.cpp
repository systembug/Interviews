//
// Created by cys on 21. 10. 10..
//

#include "CalBits.h"

namespace interviews::tests::bits {
    void CalBits::SetUp()
    {
    }

    void CalBits::TearDown()
    {
    }

    TEST_F(CalBits, basic_test) {
        interviews::bits::CalBits m_calBits;
        m_calBits.init();
        EXPECT_EQ(1, 1);
        m_calBits.release();
    }
}