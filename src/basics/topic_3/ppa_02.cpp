//
// Created by floyd on 12/5/17.
//

#include "ppa_02.h"


/* Question: Find the sum of squares of individual digits of a
 * number 'sqdnumber' and store the sum in variable
 * 'sqdNumber_result'.
 * int sqdnumber: Original number
 * int sqdNumber_result: Store the resultant in this variable
 */

void ppa_02::squaredSum(int sqdnumber,int &sqdNumber_result) {
    while (sqdnumber > 0) {
        int digit = sqdnumber % 10;
        sqdNumber_result += digit * digit;
        sqdnumber /= 10;
    }
}
