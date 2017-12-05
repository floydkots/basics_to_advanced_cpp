//
// Created by floyd on 12/5/17.
//

#include "ppa_03.h"

/*Question      : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number      : The number to be determined whether it is happy or not
int finalNumber : Store the resultant value in this variable
int cycle_no    : Store the number of iterations done to determine whether the 'number' is happy or not */
void ppa_03::detectHappy(int number, int &finalNumber, int &cycle_no) {

    int sumOfdigits;
    int iterations = 0;
    do {
        iterations++;
        sumOfdigits = ppa_03::squaredSum(number);
        number = sumOfdigits;
    } while (sumOfdigits != 1 && iterations < 10);
    finalNumber = number;
    cycle_no = iterations;
}

int ppa_03::squaredSum(int sqdNumber) {
    int sqdNumberResult = 0;
    while (sqdNumber > 0) {
        int digit = sqdNumber % 10;
        sqdNumberResult += digit * digit;
        sqdNumber /= 10;
    }
    return sqdNumberResult;
}
