# Sequential and Conditional execution of Programs

## Graded Programming Assignment 01 (GPA 01)
**FlipDigital:** FlipDigital is a company that manufactures harddisks of various RPM (Revolutions Per Minute) to cater to the needs of all individuals. Usually, the life span of their harddisks is more than 10 years, i.e. It should work for atleast 10 years. Unfortunately, a serious bug was detected, due to which the **RPM increases or decreases every year** in the following manner:
1. Multiply the number 323 to sum of the squares of the digits of the RPM,
2. Shift the digits of the RPM to the right by 1 position in a cyclic way, and finally 
3. Extract the last two digits of the new number obtained and add to the result obtained in '1'. 
The final result '3' is the new RPM. 

This issue is that if the RPM increases by a certain limit, then the hard disk crashes, which is also dangerous to the person who is using it. **The maximum limit of the RPM of the hard disk is 8 times of the RPM**, i.e. if RPM of harddisk is 1000, then the maximum RPM can be 1000 * 8 = 8000. This issue needs to be resolved before they release the harddisks to the general public. We have been given a contract to find out (based on the RPM) which harddisks will last for more than 10 years, and which will not.

**Assume that the RPM is between 3524 and 8524 only, both inclusive.**

### Task
You are required to write code that does the following:-

1. Find out the sum of the squares of the digits of the RPM
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the RPM i.e. if Number is 1234, after cyclic right shift, the number will be 4123. Thereafter, take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new RPM value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM

#### Example 1
 Assume an **RPM of 5524**. So, the **maximum limit of RPM is 5524 * 8 = 44192**
 
```text
                                                        A                B               A + last 2 Digits       
RPM     Years       SSD                             SSD * 3     Cyclic Right Shift            of B                 Result (Next RPM)
====================================================================================================================================
5524    1           4^2 + 2^2 + 5^2 + 5^2           70 * 323    4552                     22610 + 52                22662    
                    = 16 + 4 + 25 + 25              = 22610
------------------------------------------------------------------------------------------------------------------------------------
22662   2           2^2 + 6^2 + 6^2 + 2^2 + 2^2     84 * 323    22266                    27132 + 66                27198
                    = 4 + 36 + 36 + 4 + 4           = 27132
------------------------------------------------------------------------------------------------------------------------------------
27198   3           8^2 + 9^2 + 1^2 + 7^2 + 2^2     199 * 323
                    = 64 + 81 + 1 + 49 + 4          = 64227     82719                    64277 + 19                64296
------------------------------------------------------------------------------------------------------------------------------------

Stop computing further as the maximum limit of RPM is 44192, and the RPM after 3 years is 64296
```

**You are required to do the following:**
1. Find out the sum of the squares of the digits of the RPM
2. Multiply the number obtained in (1) by 323
3. Do a cyclic right shift of digits of the RPM and take the last two digits of the number obtained just now, and add it to the number obtained in point 2. Thus, obtaining a new RPM value.
4. Do these steps till the number of years are 10 or the harddisk has reached the maximum RPM
5. Finally assign the modified value i.e. the final of RPM to the variable '**finalRPM**'

## Practice Programming Assignments(PPA)

### PPA 02
A CS101 student wants to assign the value to the variable '**ageResult**' based on the age of a person. The value of age is itself stored in a variable '**age**'. The table given below mentions the conditions using which the number needs to be assigned to '**ageResult**'.

```text
Condition for age       Assign value to variable ageResult
Less than 0             -1
0 t0 5                  0
6 to 12                 1
13 - 19                 2
20 - 50                 3
51 - 60                 4
61 - 101                5
Greater than 101        -1
```

**You are required to do the following:**
Write your code to assign value -1 to 5 to the variable '**ageResult**', depending on the value of variable '**age**'.


### PPA 03

**Happy Numbers:** A number is called a happy number, if you repeat the process, of squaring the sum of the digits, till the value 1 is obtained. E.g. You need to do the following to perform this check: (a) compute the sum of the squares of its digits (b) if the resultant value is 1, then the number is a happy number, else execute point (a). If a number is not a happy number, there will be an endless loop/cycle to this execution. 

**Task:** In this programming assignment, you are required to write code that checks whether the number is a happy number or not, for 10 cycles (iterations) only. 2 examples of happy numbers (limited to 10 cycles ) are given below:

**Example 1: Assume a number '19'**
```text
Number      Computation         Result      Cycle/Iteration
19          9^2 + 1^2           82          1
82          2^2 + 8^2           68          2
68          8^2 + 6^2           100         3
100         0^2 + 0^2 + 1^2     1           4

Stop computing further, as the result obtained is 1. 
Hence, the number '19', is a happy number. We achieved
this in 4 cycles only.
```

**You are required to do the following:**

1. Find the sum of the digits of the number.
2. Check the result obtained in point 1. If it is 1, assign value 1 to the variable 'finalNumber', else again execute point 1, till the number obtained is 1 or till the number of cycle increases to 10.
3. Assign the iteration value to the variable 'cycle_no'.