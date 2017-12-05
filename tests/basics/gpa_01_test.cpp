//
// Created by floyd on 12/5/17.
//

#include <gtest/gtest.h>

#include "../../src/basics/topic_3/gpa_01.h";

namespace {
    class gpa_01_test : public testing::Test {
    public:
        int years = 0;
        long long int finalRPM = 0;
    };
}

TEST_F(gpa_01_test, TestingCyclicRightShift) {
    ASSERT_EQ(10, gpa_01::cyclicRightShift(1));
    ASSERT_EQ(21, gpa_01::cyclicRightShift(12));
    ASSERT_EQ(312, gpa_01::cyclicRightShift(123));
    ASSERT_EQ(4123, gpa_01::cyclicRightShift(1234));
    ASSERT_EQ(612345, gpa_01::cyclicRightShift(123456));
}


TEST_F(gpa_01_test, TestingSquaredSum) {
    ASSERT_EQ(1, gpa_01::squaredSum(1));
    ASSERT_EQ(5, gpa_01::squaredSum(12));
    ASSERT_EQ(14, gpa_01::squaredSum(123));
    ASSERT_EQ(30, gpa_01::squaredSum(1234));
}

TEST_F(gpa_01_test, TestingSolutionRPMWith5524) {
    gpa_01::solutionRPM(5524, years, finalRPM);
    ASSERT_EQ(3, years);
    ASSERT_EQ(64296, finalRPM);
}

TEST_F(gpa_01_test, TestingSolutionRPMWith7024) {
    gpa_01::solutionRPM(7024, years, finalRPM);
    ASSERT_EQ(10, years);
    ASSERT_EQ(45253, finalRPM);
}


