//
// Created by floyd on 12/6/17.
//

#include "pbf.h"

using namespace std;

int pbf::factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

/**
 * Program 1:
 *
 * Write a C++ program to accept a positive number from the user
 * and print its factorial.
 */
void pbf::factorialDriver() {
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
}


int pbf::calculateCombinations(int n, int r) {
    if (!(r <= n && r >= 0)) return 0;
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    int combination = numerator / denominator;
    return combination;
}


/**
 * Program 2:
 *
 * Calculate nCr. Take inputs from user and check for base
 * conditions like r <= n and r>=0.
 */
void pbf::calculateCombinationsDriver() {
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    int combination = calculateCombinations(n, r);

    if (!combination) {
        cout<<"Got invalid inputs. Please enter n >= r >= 0."<<endl;
    } else {
        cout<<n<<" combination "<<r<<"is : "<<combination;
    }
}


/**
 * Program 3:
 *
 *
 * A number is said to be perfect if it is equal to the sum of
 * all numbers which are its factors (excluding itself). So,
 * for example, 6 is a perfect number, because, it is the sum
 * of its factors (1, 2, 3). Write a function 'checkPerfect()'
 * with appropriate parameters to print the factors of the number
 * and whether the number is perfect or not. Accept the number
 * from the user in the 'main()' function.
 *
 * @param n the number to check
 */
bool pbf::checkPerfect(int n) {
    int sum = 0;
    cout<<"The factors of "<<n<<" are: (";
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout<<i;
            if (i < n/2) cout<<", ";
            sum += i;
        }
    }
    cout<<")"<<endl;
    return sum == n;
}


void pbf::checkPerfectMain() {
    int n;
    cout<<"Enter number to check for perfection: ";
    cin>>n;
    if (checkPerfect(n)) {
        cout<<n<<" is a perfect number."<<endl;
    } else {
        cout<<n<<" is not a perfect number."<<endl;
    }
}


/**
 * Program 4:
 *
 * Write a function isPrime() to determine whether the number
 * is prime or not.  It should return either 'true' or 'false'.
 * The number should be accepted from the user in the 'main()'
 * function.
 *
 * @param n the number to test for primality
 * @return true if the number is prime, false otherwise
 */
bool pbf::isPrime(int n) {
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    int i = 5, w = 2;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i += w;
        w -= 6;
    }
    return true;
}



void pbf::isPrimeMain() {
    int n;
    cout<<"Enter the number to test for primality: ";
    cin>>n;
    if (isPrime(n)) {
        cout<<n<<" is a prime number."<<endl;
    } else {
        cout<<n<<" is not a prime number."<<endl;
    }
}