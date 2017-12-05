//
// Created by floyd on 12/5/17.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../src/basics/topic_3/ppa_02.h";

using testing::Eq;

TEST(ppa_02Test, ThreeDigitInteger) {
    int sqdNumberResult;
    ppa_02::squaredSum(234, sqdNumberResult);
    ASSERT_EQ(29, sqdNumberResult);
}

TEST(ppa_02Test, OneDigitInt) {
    int sqdNumberResult;
    ppa_02::squaredSum(9, sqdNumberResult);
    ASSERT_EQ(81, sqdNumberResult);
}

TEST(ppa_02Test, OneDigitIntWhichIsZero) {
    int sqdNumberResult;
    ppa_02::squaredSum(0, sqdNumberResult);
    ASSERT_EQ(0, sqdNumberResult);
}


