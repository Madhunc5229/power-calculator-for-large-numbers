/**
 * @file main.cpp
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief This is the main file to compute the power of a number
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/powercaltr.h"
#include <iostream>

int main()
{
    operation::PowerCaltr calculate;

    float base;
    std::cout << "Enter a number in between 0 to 99999"
              << "\n";
    std::cin >> base;

    while (!(calculate.IsNumberValid(base)))
    {
        std::cout << "Number is invalid, please enter a valid integer between 0 and 99999"
                  << "\n";
        std::cin >> base;
    }

    int exponent = calculate.reverseNumber(base);
    std::cout << "Result: " << base << "^" << exponent << " is ";
    calculate.calPower(base, exponent);
}