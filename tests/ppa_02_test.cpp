//
// Created by floyd on 12/5/17.
//
#include <gtest/gtest.h>

#include "../src/basics/topic_3/ppa_02.h";

TEST(ppa_02_test, ThreeDigitInteger) {
    int sqdNumberResult;
    ppa_02::squaredSum(234, sqdNumberResult);
    ASSERT_EQ(29, sqdNumberResult);
}

TEST(ppa_02_test, OneDigitInt) {
    int sqdNumberResult;
    ppa_02::squaredSum(9, sqdNumberResult);
    ASSERT_EQ(81, sqdNumberResult);
}

TEST(ppa_02_test, OneDigitIntWhichIsZero) {
    int sqdNumberResult;
    ppa_02::squaredSum(0, sqdNumberResult);
    ASSERT_EQ(0, sqdNumberResult);
}


