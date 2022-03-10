/**
 * @file unitest.cpp
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief This file contains a bunch of tests for the methods written to compute the power of a number
 * @version 0.1
 * @date 2022-03-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <gtest/gtest.h>
#include "../include/powercaltr.h"

operation::PowerCaltr calculate_power;

TEST(InputNumberTest, NegativeNumberTest){
    EXPECT_EQ( calculate_power.IsNumberValid(-1), false);
}

TEST(InputNumberTest, FloatNumberTest){
    EXPECT_EQ( calculate_power.IsNumberValid(5.4), false);
}

TEST(InputNumberTest, OutOfRangeTest){
    EXPECT_EQ( calculate_power.IsNumberValid(999999), false);
}

TEST(ReverseNumber, InvolvingZeroTest){
    EXPECT_EQ( calculate_power.reverseNumber(1010), 101);
}

TEST(ReverseNumber, SameDigitsTest){
    EXPECT_EQ( calculate_power.reverseNumber(222), 222);
}