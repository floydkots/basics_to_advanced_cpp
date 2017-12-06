//
// Created by floyd on 12/5/17.
//
/**
 * Basic Practice Problems (bpp)
 */

#include "bpp.h"
using namespace std;

/**
 * Program 1
 *
 * Write a C++ program to find the area and perimeter of a
 * rectangle. Accept the length and width of the rectangle as
 * input from the user.
 */
void bpp::areaAndPerimeterOfARectangle() {
    int l, w;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the width of the rectangle: ";
    cin>>w;
    cout<<"The area of the rectangle is (l x w) = "<<l * w<<endl;
    cout<<"The perimeter of the rectangle is 2(l + 2) = "<<2 * (l + w);
}



/**
 * Program 2
 *
 * Write a C++ Program to print the ASCII value of a given
 * character. Accept the character as input from the user.
 */
void bpp::printTheASCIIValue() {
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"The ASCII value of character "<<c<<" is "<<(int)c<<endl;
}


/**
 * Program 3
 *
 * Write a C++ Program to print the fractional part of a
 * floating point number. Accept the floating point number as
 * input from the user.
 */
void bpp::printTheFractionalPart() {
    float n;
    cout<<"Enter a floating point number: ";
    cin>>n;
    cout<<"Fractional part of the number "<<n<<" is "<<n - (long)n<<endl;
}

/**
 * Program 4
 *
 * Write a C++ Program to print the expansion of (a+b)^2.
 * Accept the values of 'a' and 'b' from the user.
 */
void bpp::binomialExpansionPower2() {
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"("<<a<<" + "<<b<<")^2"<<endl;
    cout<<"= "<<a<<"^2 + 2*"<<a<<"*"<<b<<" + "<<b<<"^2"<<endl;
    cout<<"= "<<a*a<<" + "<<2*a*b<<" + "<<b*b<<endl;
    cout<<"= "<<a*a + 2*a*b + b*b<<endl;
}