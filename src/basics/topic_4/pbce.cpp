//
// Created by floyd on 12/5/17.
//
/**
 * Programs based on Conditional Execution (pbce)
 */
#include "pbce.h"
using namespace std;

/**
 * Program 1:
 *
 * Write a C++ Program to accept two numbers from the user and swap them.
 */
void pbce::swapThem() {
    int num1, num2;
    cout<<"Enter value for Number 1: ";
    cin>>num1;
    cout<<"Enter value for Number 2: ";
    cin>>num2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"The modified values after swapping are:"<<endl;
    cout<<"Number 1: "<<num1<<endl;
    cout<<"Number 2: "<<num2<<endl;
}

/**
 * Program 2:
 *
 * Write a C++ Program to take input from the user (1, 2, or 3)
 * and print an appropriate message
 */
void pbce::inputToMessage() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    switch(n) {
        case 1:
            cout<<"You have chosen to buy an iPad!"<<endl;
            break;
        case 2:
            cout<<"You have chosen to buy a Nokia Tablet!"<<endl;
            break;
        case 3:
            cout<<"You have chosen to buy a Samsung Tablet!"<<endl;
            break;
        default:
            cout<<"Ah! You seem to want to Aakash Tablet. Great choice!"<<endl;
    }
}

/**
 * Program 3:
 *
 * Write a C++ program to accept the length of all 3 sides of
 * the triangle and then display whether a triangle is a right
 * angled triangle or not.
*/
void pbce::isRightAngled() {
    int side[3];
    cout<<"Enter Length for Side 1: ";
    cin>>side[0];
    cout<<"Enter Length for Side 2: ";
    cin>>side[1];
    cout<<"Enter Length for Side 3: ";
    cin>>side[2];

    for (int i = 0; i < 3; i++) {
        if (side[i%3]*side[i%3] + side[(i+1)%3]*side[(i+1)%3] == side[(i+2)%3]*side[(i+2)%3]) {
            cout<<"The given triangle is a right angled triangle."<<endl;
            return;
        }
    }
    cout<<"The given triangle is not a right angled triangle."<<endl;
}

/**
 * Program 4:
 *
 * Write a C++ program that accepts a number as input from the user, denoting the year,
 * and prints whether the year is a leap year or not.
 */
void pbce::isLeapYear() {
    int year;
    cout<<"Enter year: ";
    cin>>year;
    if (year < 1000) {
        cout<<"The year entered is not valid."<<endl;
        return;
    }
    if (year % 4 == 0) {
        cout<<"The year entered is a leap year."<<endl;
    } else {
        cout<<"The year entered is not a leap year."<<endl;
    }
}


/**
 * Program 5:
 *
 * Write a C++ program that accepts a character as input from
 * the user, and prints 1 if it is a vowel and 0 otherwise.
 */
void pbce::isVowel() {
    char x;
    char const vowels[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    cout<<"Enter a character: ";
    cin>>x;
    for (char vowel : vowels) {
        if (vowel == x) {
            cout << "Printing 1 since it is a vowel" << endl;
            return;
        }
    }
    cout<<"Printing 0 as it is not a vowel."<<endl;
}

