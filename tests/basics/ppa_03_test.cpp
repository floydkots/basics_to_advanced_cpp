//
// Created by floyd on 12/5/17.
//
#include <gtest/gtest.h>

#include "../../src/basics/topic_3/ppa_03.h";

namespace {
    class ppa_03_test : public testing::Test {
    public:
        int finalNumber{};
        int cycle_no{};
    };
}

TEST_F(ppa_03_test, TestingAgainst19) {
    ppa_03::detectHappy(19, finalNumber, cycle_no);
    ASSERT_EQ(1, finalNumber);
    ASSERT_EQ(4, cycle_no);
}

TEST_F(ppa_03_test, TestingAgainst3) {
    ppa_03::detectHappy(3, finalNumber, cycle_no);
    ASSERT_EQ(20, finalNumber);
    ASSERT_EQ(10, cycle_no);
}
