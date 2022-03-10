/**
 * @file powercaltr.h
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief This file contains a class to calculate power of a number.
 * @version 0.1
 * @date 2022-03-09
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef POWER_CALTR_H
#define POWER_CALTR_H

namespace operation
{
    /**
     * @brief Class to calculate power of a number.
     *
     */
    class PowerCaltr
    {
    public:
        PowerCaltr();

        /**
         * @brief Calculate product and carry for each digit in result array
         *
         * @param x base number
         * @param result array conatining the digits of base number
         * @param result_size size or number of elements in result array
         * @return int size or number of elements in result array
         */
        int prodAndCarry(int x, int result[], int result_size);

        /**
         * @brief Computes the power of a number
         *
         * @param x base
         * @param n exponent
         */
        void calPower(int x, int n);

        /**
         * @brief Reverses the number given as parameter
         *
         * @param x number that has to reversed
         * @return int reversed number
         */
        int reverseNumber(int x);

        /**
         * @brief Checks if the number is valid, i.e if num lies in between 0 and 99999
         *
         * @param num
         * @return true if number is valid
         * @return false if number is not valid
         */
        bool IsNumberValid(float num);
    };
}

#endif
