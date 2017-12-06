//
// Created by floyd on 12/6/17.
//
#include <gtest/gtest.h>

#include "../../src/basics/topic_4/pbf.h";

TEST(pbf_test, TestFactorial) {
    ASSERT_EQ(1, pbf::factorial(0));
    ASSERT_EQ(1, pbf::factorial(1));
    ASSERT_EQ(120, pbf::factorial(5));
}

TEST(pbf_test, TestCombination) {
    ASSERT_EQ(0, pbf::calculateCombinations(2, 5));
    ASSERT_EQ(10, pbf::calculateCombinations(5, 2));
    ASSERT_EQ(252, pbf::calculateCombinations(10, 5));
}

TEST(pbf_test, TestCheckPerfect) {
    ASSERT_EQ(true, pbf::checkPerfect(6));
    ASSERT_EQ(false, pbf::checkPerfect(20));
}

TEST(pbf_test, TestIsPrime) {
    ASSERT_EQ(true, pbf::isPrime(71));
    ASSERT_EQ(false, pbf::isPrime(147));
}