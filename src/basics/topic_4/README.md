# Functions

## Practice Programs

### Basic Practice Problems

**Program 1:**<br>
Write a C++ program to find the area and perimeter of a rectangle. Accept the length and width of the rectangle as input from the user. Sample input/output statements are given below:
```text
    Enter the length of the rectangle:  20
    Enter the width of the rectangle: 10
    The area of rectangle is (l x w) = 200
    The perimeter of rectangle is 2(l + w) = 60
```

**Program 2:**<br>
Write a C++ Program to print the ASCII value of a given character. Accept the character as input from the user. Sample input/output statements are given below:
```text
    Enter a character: F
    The ASCII value of character F is 70
```

**Program 3:**<br>
Write a C++ Program to print the fractional part of a floating point number. Accept the floating point number as input from the user. Sample input/output statements are given below:
```text
    Enter a floating point number :12.345678
    Fractional part of the number 12.345678 is 0.345678
```

**Program 4:**<br>
Write a C++ Program to print the expansion of **(a+b)^2**. Accept the values of '**a**' and '**b**' from the user. Sample input/output statements are given below:
```text
    Enter a: 3
    Enter b: 4
    (3 + 4)^2
    = 3^2 + 2*3*4 + 4^2
    = 9 + 24 + 16 
    = 49
```

### Programs based on Conditional Execution
**Program 1:**<br>
Write a C++ Program to accept two numbers from the user and swap them. Sample input/output statements are given below:
```text
   Enter value for Number 1: 34
   Enter value of Number 2: 56
   The modified values after swapping are:
   Number 1: 56
   Number 2: 34
```

**Program 2:**
Write a C++ Program to take input from the user (1, 2, or 3) and print an appropriate message:
```text
    Input Given by User |       Message
    ==========================================================================
        1               | You have chosen to buy an iPad 
    --------------------------------------------------------------------------
        2               | You have chosen to buy a Nokia tablet!
    --------------------------------------------------------------------------
        3               | You have chosen to buy a Samsung Tablet!
    --------------------------------------------------------------------------
        None of these   | Ah! You seem to want an Aakash Tablet. Great choice!      
    --------------------------------------------------------------------------
```

Sample input/output statements are given below:
```text
   Sample 1:
      Enter a number: 4
      Ah! You seem to want an Aaksh Tablet. Great choice!
   Sample 2:
      Enter a number: 1
      You have chosen to buy an iPad!
```

**Program 3:**<br>
Write a C++ program to accept the length of all 3 sides of the triangle and then display whether a triangle is a right angled triangle or not. Sample input/output statements are given below:
```text
   Sample 1:
      Enter Length for Side 1: 10
      Enter Length for Side 2: 10
      Enter Length for Side 3: 20
      The given triangle is not right angled triangle.
   Sample 2:
      Enter Length for Side 1: 10
      Enter Length for Side 2: 24
      Enter Length for Side 3: 26
      The given triangle is a right angled triangle.
```

**Program 4**<br>
Write a C++ program that accepts a number as input from the user, denoting the year, and prints whether the year is a leap year or not.   
```text
   Sample 1:
      Enter year: 2008
      The year entered is a leap year
   Sample 2:
      Enter year: 2015
      The year entered is not a leap year
   Sample 3:
      Enter year: 12
      The year entered is not valid
```

**Program 5**<br>
Write a C++ program that accepts a character as input from the user, and prints 1 if it is a vowel and 0 otherwise. Sample input/output statements are given below:
```text
   Sample 1:
      Enter a character : a
      Printing 1 since it is a vowel
   Sample 2:
      Enter a character : Z
      Printing 0 as it is not a vowel
   Sample 3:
      Enter a character : ?
      Printing 0 as it is not a vowel
```


### Programs based on Iterative Solutions
**Program 1:**<br>
Write a C++ program that accepts the the length and breadth of the rectangle as input from the user. The program should print the rectangle using asterisk (*). Sample input/output statements are given below:
```text
   Enter length of the rectangle: 7
   Enter height of the rectangle: 4
   ******* 
   *     * 
   *     *  
   *******
```

**Program 2:**<br>
Write a C++ program to accept 'n' positive numbers from the user and print the second highest number. Sample input and output statemens are given below:
```text
   Enter n: 7
   Enter 7 positive numbers: 23 45 21 20 8 34 67
   From the 7 given numbers, the second highest number is 45
```

**Program 3:**<br>
Write a C++ program to print the following pattern.
```text
    *  
   ***
  *****
 *******
```

**Program 4:**<br>
Write a C++ program to accept a positive number from the user and determine whether the number is a palindrome or not. A number is a palindrome, if the number remains the same after reversing its digits. Sample input/output statemens are given below:
```text
   Sample 1:
      Enter a number: 12321
      The number entered is a palindrome.
   Sample 2:
      Enter a number: 123421
      The number entered is not a palindrome.
```

**Program 5:**<br>
Write a C++ program to accept a positive number 'n' from the user and print first 'n' prime numbers. Sample input/output statements are given below:
```text
   Enter a number: 7
   First 7 prime numbers are:
   2
   3
   5
   7
   11
   13
   17
```

**Program 6(A):**<br>
Write a C++ program that prints a conversion table from Centigrade to Fahrenheit, from 10oC to 30oC using for loop. The output should be similar to the one given below.
```text
Centigrade   Fahrenheit
    10          50
    11          51.8
    ..          ..
    ..          ..
    29          84.2
    30          86
```

**Program 6(B):**<br>
Rewrite the program written in 6 (A) using while loop

**Program 7:**<br>
Write a C++ program that accepts a number as input from the user, reverses it and prints the original as well the reverse. Sample input/output statements are given below:
```text
   Enter a number: 12345
   The reverse of 12345 is 54321
```

**Program 8:**<br>
Write a C++ program to accept three numbers, 'a', 'n', and 'd' from the user, and print the arithmetic sequence: 
{ **a, a + d, a + 2d, ..., a + nd** }. Sample input/output statements are given below:
```text
   Enter a: 5
   Enter d: 2
   Enter n: 4
   Substituting value of 'a', 'd', and 'n' in the sequence {a, a+d, a+2d, ..., a+nd}
   = {5, 5 + 2, 5 + 2*2, 5 + 3*2, 5 + 4*2}
   = {5, 7, 9, 11, 13}
```

**Program 9:**<br>
Write a C++ program to accept three numbers, 'a', 'r', and 'n' from the user, and print the arithmetic sequence: 
{ a, ar, ar2, ..., arn }. Sample input/output statements are given below:
```text
   Enter a: 5
   Enter r: 2
   Enter n: 4
   Substituting value of 'a', 'r', and 'n' in the sequence {a, ar^1, ar^2, ..., ar^n}
   = {5, 5*2^1, 5*2^2, 5*2^3, 5*2^4 }
   = {5, 10, 20, 40, 80}
```


### Programs based on Functions
**Program 1:**<br>
Write a C++ program to accept a positive number from the user and print its factorial. Sample input/output statements are given below:
```text
   Enter a positive number: 5
   The factorial of 5 is 120
```

**Program 2:**<br>
Calculate nCr. Take inputs from user and check for base conditions like r <= n and r>=0.

**Program 3:**<br>
A number is said to be perfect if it is equal to the sum of all numbers which are its factors (excluding itself). So, for example, 6 is a perfect number, because, it is the sum of its factors (1, 2, 3). Write a function 'checkPerfect()' with appropriate parameters to print the factors of the number and whether the number is perfect or not. Accept the number from the user in the 'main()' function.

**Program 4:**<br>
Write a function isPrime() to determine whether the number is prime or not.  It should return either 'true' or 'false'. The number should be accepted from the user in the 'main()' function. 

