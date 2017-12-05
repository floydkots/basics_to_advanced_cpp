//
// Created by floyd on 12/5/17.
//

#include "gpa_01.h"

/* Question:  You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the rpm
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the rpm i.e.
    if Number is 1234, after cyclic right shift, the number will be 4123.
    Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new rpm value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

long long int rpm: Original value of RPM
int years: Store the number years that have elapsed
long long int finalRPM: Store the modified value of RPM i.e. the final of RPM */

void gpa_01::solutionRPM(long long int rpm, int &years, long long int &finalRPM) {
    int numberOfYears = 0;
    long long int maximumRPM = rpm * 8;
    long long int newRpm = rpm;
    while (numberOfYears < 10 && newRpm < maximumRPM) {
        long long int squareOfDigits = squaredSum(newRpm);
        long long int by323 = squareOfDigits * 323;
        long long int shifted = cyclicRightShift(newRpm);
        newRpm = by323 + (shifted % 100);
        numberOfYears++;
    }
    years = numberOfYears;
    finalRPM = newRpm;
}


long long int gpa_01::squaredSum(long long int sqdNumber) {
    int sqdNumberResult = 0;
    while (sqdNumber > 0) {
        long long int digit = sqdNumber % 10;
        sqdNumberResult += digit * digit;
        sqdNumber /= 10;
    }
    return sqdNumberResult;
}


long long int gpa_01::cyclicRightShift(long long int number) {
    long long int last = number % 10;
    long long int front = number / 10;
    long long int counter = number / 10;

    do {
        last *= 10;
        counter /= 10;
    } while(counter);
    return last + front;
}