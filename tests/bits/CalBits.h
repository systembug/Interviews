//
// Created by cys on 21. 10. 10..
//

#ifndef INTERVIEWS_TESTS_BITS_CALBITS_H
#define INTERVIEWS_TESTS_BITS_CALBITS_H

#include "gtest/gtest.h"
#include "../src/"

namespace interviews::tests::bits {
    class CalBits : public ::testing::Test {
    public:
        CalBits() = default;
        ~CalBits() override = default;

    public:
        void SetUp() override;
        void TearDown() override;
    };
}


#endif //INTERVIEWS_TESTS_BITS_CALBITS_H
