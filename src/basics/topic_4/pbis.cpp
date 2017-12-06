//
// Created by floyd on 12/6/17.
//

#include "pbis.h"
using namespace std;
/*
 * Programs based on Iterative Solutions (pbis)
 */

/**
 * Program 1:
 *
 * Write a C++ program that accepts the the length and breadth
 * of the rectangle as input from the user. The program should
 * print the rectangle using asterisk (*).
 */
void pbis::printRectangle() {
    int l, h;
    cout<<"Enter length of the rectangle: ";
    cin>>l;
    cout<<"Enter height of the rectangle: ";
    cin>>h;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= l; j++) {
            if (i == 1 || i == h || j == 1 || j == l) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

/**
 * Program 2:
 *
 * Write a C++ program to accept 'n' positive numbers from the user
 * and print the second highest number.
 */
void pbis::printSecondHighestPositiveNumber() {
    int n, entered;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter "<<n<<" positive numbers: ";
    int largest = 0;
    int second = 0;
    for (int i = 0; i < n; i++) {
        cin>>entered;
        if (entered > largest) {
            second = largest;
            largest = entered;
        } else if (entered < largest && entered > second) {
            second = entered;
        }
    }
    cout<<"From the "<<n<<" given numbers, the second highest number is "<<second<<endl;
}


/**
 * Program 3
 *
 * Write a C++ program to print the following pattern.
 *                      *
 *                     ***
 *                    *****
 *                   *******
 */
void pbis::printTrianglePattern() {
    int height = 10;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height * 2 - 1; j++) {
            if (j <= height - i || j > height + i - 1) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}


/**
 * Program 4:
 *
 * Write a C++ program to accept a positive number from the user
 * and determine whether the number is a palindrome or not.
 * A number is a palindrome, if the number remains the same after
 * reversing its digits.
 */
void pbis::isPalindrome() {
    long int number;
    cout<<"Enter a number: ";
    cin>>number;
    while (number > 0) {
        long int numberCopy = number;
        int length = 0;
        while (numberCopy > 10) {
            numberCopy /= 10;
            length++;
        }
        long int last = number % 10;
        long int first = numberCopy;
        if (first != last) {
            cout<<"The number entered is not a palindrome."<<endl;
            return;
        }
        number -= last * (long)pow(10, length);
        number /= 10;
    }
    cout<<"The number entered is a palindrome"<<endl;
}


/**
 * Program 5:
 *
 * Write a C++ program to accept a positive number 'n' from
 * the user and print first 'n' prime numbers.
 */
void pbis::printFirstNPrimeNumbers() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"First "<<n<<" prime numbers are:"<<endl;
    int prime = 1;
    while (n > 0) {
        int check = prime;
        while(true) {
            check++;
            if (check == 2 || check == 3) break;
            if (check % 2 == 0 || check % 3 == 0) continue;

            int i = 5;
            int w = 2;
            while (i * i <= check) {
                if (check % i == 0) break;
                i += w;
                w = 6 - w;
            }
            if (check % i == 0) continue;
            break;
        }
        cout<<check<<endl;
        prime = check;
        n--;
    }
}


/**
 * Program 6(A):
 *
 * Write a C++ program that prints a conversion table from
 * Centigrade to Fahrenheit, from 10oC to 30oC using for loop.
 */
void pbis::printCentigrateToFahrenheitConversionTable() {
    int start = 10;
    int stop = 30;

    cout<<"Centrigrade\t\tFahrenheit"<<endl;
    for (int i = start; i <= stop; i++) {
        double fahren = i * 9.0/5 + 32;
        cout<<"\t"<<i<<"\t\t\t\t"<<fahren<<endl;
    }
}

/**
 * Program 6(B):
 *
 * Rewrite the program written in 6 (A) using while loop
 */
void pbis::printCentigrateToFahrenheitConversionTableUsingWhile() {
    int start = 10;
    int stop = 30;

    cout<<"Centrigrade\t\tFahrenheit"<<endl;
    while (start <= stop) {
        double fahren = start * 9.0/5 + 32;
        cout<<"\t"<<start<<"\t\t\t\t"<<fahren<<endl;
        start++;
    }
}


/**
 * Program 7:
 *
 * Write a C++ program that accepts a number as input from the
 * user, reverses it and prints the original as well the reverse.
 */
void pbis::reverseAndPrint() {
    long original, reversed = 0;
    cout<<"Enter a number: ";
    cin>>original;

    long originalCopy = original;
    while(originalCopy > 0) {
        long digit = originalCopy % 10;
        originalCopy /= 10;
        reversed *= 10;
        reversed += digit;
    }
    cout<<"The reverse of "<<original<<" is "<<reversed<<endl;
}


/**
 * Program 8:
 *
 * Write a C++ program to accept three numbers, 'a', 'n', and 'd'
 * from the user, and print the arithmetic sequence:
 * { a, a + d, a + 2d, ..., a + nd }.
 */
void pbis::printArithmeticSequence() {
    int a, d, n;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Substituting values of 'a', 'd' and 'n' in the "
            "sequence {a, a + d, a + 2d, ..., a + nd}"<<endl;
    cout<<"= {";
    for (int i = 0; i <= n; i++) {
        cout<<a;
        if (i == 1) {
            cout<<" + "<<d;
        } else if (i > 1) {
            cout<<" + "<<i<<"*"<<d;
        }
        if (i != n) cout<<", ";
    }
    cout<<"}\n= {";
    for (int i = 0; i <= n; i++) {
        cout<<a + i * d;
        if (i != n) cout<<", ";
    }
    cout<<"}";
}


/**
 * Program 9:
 *
 * Write a C++ program to accept three numbers, 'a', 'r', and 'n'
 * from the user, and print the arithmetic sequence:
 * { a, ar, ar^2, ..., ar^n }.
 */
void pbis::printArithmeticSequence2() {
    int a, r, n;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Substituting value of 'a', 'r' and 'n' in the sequence"
            "{ a, ar, ar^2, ..., ar^n }"<<endl;
    cout<<"= {";
    for (int i = 0; i <= n; i++) {
        cout<<a;
        if (i > 0) {
            cout<<"*"<<r<<"^"<<i;
        }
        if (i != n) cout<<", ";
    }
    cout<<"}\n= {";
    for (int i = 0; i <= n; i++) {
        cout<<a * pow((double)r, i);
        if (i != n) cout<<", ";
    }
    cout<<"}";

}


