/**
 * @file powercaltr.cpp
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief This file contains all the method definations declared in the corresponding .h file.
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/powercaltr.h"
#include <iostream>

operation::PowerCaltr::PowerCaltr() {}

int operation::PowerCaltr::prodAndCarry(int x, int result[], int result_size)
{

    int carry = 0;

    for (int i = 0; i < result_size; i++)
    {

        int prod = result[i] * x + carry;

        result[i] = prod % 10;

        carry = prod / 10;
    }

    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }
    return result_size;
}

void operation::PowerCaltr::calPower(int x, int n)
{

    int result[99999];
    int result_size = 0;
    int tmp = x;

    if(n == 0 ){
    std::cout <<"1";
    return;
}
    while (tmp != 0)
    {
        result[result_size] = tmp % 10;
        result_size++;
        tmp = tmp / 10;
    }

    for (int i = 2; i <= n; i++)
    {
        result_size = prodAndCarry(x, result, result_size);
    }

    for (int i = result_size - 1; i >= 0; i--)
    {
        std::cout << result[i];
    }
}

int operation::PowerCaltr::reverseNumber(int x)
{

    int tmp = x;
    std::string digits;

    while (tmp != 0)
    {
        digits = digits + std::to_string(tmp % 10);
        tmp = tmp / 10;
    }
    return std::stoi(digits);
}

bool operation::PowerCaltr::IsNumberValid(float num)
{

    if ((num > 0 && num < 99999) && (int(num) == num) && int(num) == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
