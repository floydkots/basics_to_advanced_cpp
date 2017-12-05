# Sequential and Conditional execution of Programs

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