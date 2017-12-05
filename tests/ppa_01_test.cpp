//
// Created by floyd on 12/5/17.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../src/basics/topic_2/ppa_01.h"

using testing::Eq;

namespace {
    class ppa_01_test : public testing::Test {
    public:
        ppa_01 ppa01;

        ppa_01_test() {
            ppa01;
        }
    };
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo0_Test) {
    int ageResult;
    ppa01.detectAgeResult(1, ageResult);
    ppa01.detectAgeResult(5, ageResult);
    ASSERT_EQ(0, ageResult);
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultToNegativeOne_Test) {
    int ageResult;
    ppa01.detectAgeResult(-1, ageResult);
    ppa01.detectAgeResult(102, ageResult);
    ASSERT_EQ(-1, ageResult);
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo1_Test) {
    int ageResult;
    ppa01.detectAgeResult(6, ageResult);
    ppa01.detectAgeResult(12, ageResult);
    ASSERT_EQ(1, ageResult);

}TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo2_Test) {
    int ageResult;
    ppa01.detectAgeResult(13, ageResult);
    ppa01.detectAgeResult(15, ageResult);
    ASSERT_EQ(2, ageResult);
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo3_Test) {
    int ageResult;
    ppa01.detectAgeResult(50, ageResult);
    ASSERT_EQ(3, ageResult);
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo4_Test) {
    int ageResult;
    ppa01.detectAgeResult(51, ageResult);
    ASSERT_EQ(4, ageResult);
}

TEST_F(ppa_01_test, ppa_01Test_shouldSetAgeResultTo5_Test) {
    int ageResult;
    ppa01.detectAgeResult(61, ageResult);
    ASSERT_EQ(5, ageResult);
}
