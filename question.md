# Table of Content <a name="content"></a>

1. [Basic Simple C Programs](#basic)
1. [If/Else Statement](#if)
1. [Loops](#loops)
1. [Patterns](#patterns)

# Basic Simple C Programs <a name="basic"></a>

### 1. C Program to Display The Size of Different Data Types

| Data Type   | Size (bytes) | Range                           | Format Specifier |
| ----------- | ------------ | ------------------------------- | ---------------- |
| int         | 2            | -2,147,483,648 to 2,147,483,647 | %d               |
| long int    | 4            | -2,147,483,648 to 2,147,483,647 | %ld              |
| float       | 4            | 1.2E-38 to 3.4E+38              | %f               |
| double      | 8            | 1.7E-308 to 1.7E+308            | %lf              |
| long double | 12           | 3.4E-4932 to 1.1E+4932          | %Lf              |
| char        | 1            | -128 to 127                     | %c               |

[Click Here For Solution](question_1.c)

[Back to Top &uarr;](#content)

[Back to Top &uarr;](#content)

<!-- ### .

Test Data:

Expected Output:

[Click Here For Solution](.c)

[Back to Top ↑](#content)
 -->

# If/Else Statement <a name="if"></a>

### 1. Write a program to accept a number and print if the number is Positive/Negative in C language

[Click Here For Solution](question_17.c)

[Back to Top &uarr;](#content)

### 2. Write a program to accept a number from user and print if it is even or odd in C language

**HINT: Even number is divisible by 2 and generates a remainder of 0**

[Click Here For Solution](question_18.c)

[Back to Top &uarr;](#content)

### 3. Write a program to find greater between two numbers.

[Click Here For Solution](question_19.c)

[Back to Top &uarr;](#content)

### 4. Write a program to accept three numbers from user and print them in ascending and descending order in C language

[Click Here For Solution](question_20.c)

[Back to Top &uarr;](#content)

### 5. Write a program to calculate roots of a quadratic equations in C language

[Click Here For Solution](question_21.c)

[Back to Top &uarr;](#content)

### 6. Write a program to accept roll number ,and marks for three subjects, print total marks and average, also print grade by considering following conditions

**Avg >= 60** Grade A

**Avg < 60, Avg >= 50** Grade B

**Avg < 50, Avg >= 40** Grade C Grade F.

[Click Here For Solution](question_22.c)

[Back to Top &uarr;](#content)

### 7. Write a Program to accept user’s marital status, gender and age to check if he/she is eligible for marriage or not.

[Click Here For Solution](question_23.c)

[Back to Top &uarr;](#content)

### 8. Check Character Is Vowel or Consonant

[Click Here For Solution](question_24.c)

[Back to Top &uarr;](#content)

### 9. A Character Is an Alphabet or Not

[Click Here For Solution](question_25.c)

[Back to Top &uarr;](#content)

### 10. C Program to Check Uppercase or Lowercase or Digit or Special Character

**Hint:** [ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html) value of the digit is between 48 to 58 and lowercase characters have ASCII values in the range of 97 to122, and uppercase is between 65 and 90.

[Click Here For Solution](question_26.c)

[Back to Top &uarr;](#content)

### 11. Leap Year Program in C Using IF-ELSE

**Leap Year Examples:**

- 1992: Leap Year
- 2002: Not a Leap Year
- 2016: Leap Year
- 2100: Not a Leap Year

[Click Here For Solution](question27.c)

[Back to Top &uarr;](#content)

### 12. Given Date Month and the Year Is Correct or Not Using If-Else

**Valid Date Examples:**

- 09-03-2002
- 01-01-2023
- 31-12-2025

**Invalid Date Examples:**

- 29-02-2023
- 32-12-2023
- 31-03-2023

[Click Here For Solution](question_28.c)

[Back to Top &uarr;](#content)

### 13. While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. if quantity and price per item are input through the keyboard, write a program to calculate the total expenses.

Test Data:

    Enter quantity and price per item: 1000  2

Expected Output:

    Total expenses = 1800.00

[Click Here For Solution](calculate_total_expenses.c)

[Back to Top ↑](#content)

### 14. If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

Test Data:

    Enter cost price and selling price: 50 100

Expected Output:

    He incurred profit of Rs.50

[Click Here For Solution](profit_or_loss.c)

[Back to Top ↑](#content)

### 15. A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

Test Data:

    Enter 5 digit number: 12345

Expected Output:

    Reverse number = 54321
    Reverse number is not equal to original number.

[Click Here For Solution](check_rev_equal.c)

[Back to Top ↑](#content)

### 16. Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees

Test Data:

    input 3 angles of triangle: 45 45 90

Expected Output:

    Triangle is valid

[Click Here For Solution](tiangle_is_valid_not.c)

[Back to Top ↑](#content)

### 17. Find the absolute value of a number entered through the keyboard.

Test Data:

    Enter a number: -15
    Enter a number: 25

Expected Output:

    Absolute number = 15
    Absolute number = 25

[Click Here For Solution](convert_into_abs.c)

[Back to Top ↑](#content)

### 18. Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

Test Data:

    Enter the length and breadth of a rectangle: 5 4

Expected Output:

    Area of rectangle is greater than its perimeter.

[Click Here For Solution](area_greater_perimeter.c)

[Back to Top ↑](#content)

### 19. Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

Test Data:

    Enter points (x1, y1):1 2
    Enter points (x2, y2):3 4
    Enter points (x3, y3):5 6

Expected Output:

    All the three points fall on the straight line:

[Click Here For Solution](three_points_in_same_line.c)

[Back to Top ↑](#content)

### 20. A certain grade of steel is graded according to the following conditions:

```
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:

Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.
```

Test Data:

    Enter hardness, carbon and tensile: 60 0.8 5700

Expected Output:

    Grade is 7

[Click Here For Solution](let_us_c_Ch4_D_c.c)

[Back to Top ↑](#content)

### 21. Write a C program to input side of a triangle and check whether triangle is valid or not using if else.

> A triangle is valid if sum of its two sides is greater than the third side.

Test Data:

    Enter 3 sides of a triangle: 7 10 5

Expected Output:

    Valid Triangle

[Click Here For Solution](check_valid_triangle.c)

[Back to Top ↑](#content)

### 22. If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right-angled triangle.

[Click Here For Solution](check_triangle.c)

[Back to Top ↑](#content)

### 23. Write a program to find the greatest of three numbers entered through the keyboard. Use conditional operators.

Test Data:

    Enter 3 number: 1 2 3

Expected Output:

    Greatest number is 3

[Click Here For Solution](greatest_of_three.c)

[Back to Top ↑](#content)

### 24. WAP to print the second maximum out of three numbers.

Test Data:

    Enter 3 numbers : 1 2 3

Expected Output:

    Second maximum = 2

[Click Here For Solution](second_maximum.c)

[Back to Top ↑](#content)

### 25. WAP to check whether a 3 digit number is a magic number or not. (Palindrome) A number is a magic number if its reverse is same as the original number.

Test Data:

    Enter a number: 123

Expected Output:

    Not a magic number.

[Click Here For Solution](is_palindrome.c)

[Back to Top ↑](#content)

### 26. WAP to compute the pension of an employee.

```
If the person is male.
Age >= 90 pension is 4000
Age >= 60 pension is 6000
Age < 60 pension is 0

if the person is female.
Age >= 90 pension is 3000
Age >= 60 pension is 5000
Age < 60 pension is 0
```

[Click Here For Solution](emp_pension.c)

[Back to Top ↑](#content)

### 27. Calculate Telephone Bill:-

| calls          | Rate/call |
| -------------- | --------- |
| First 50 calls | free      |
| next 100 calls | Rs.3/call |
| next 200 calls | Rs.5/call |
| next 350 calls | Rs.7/call |

Test Data:

Expected Output:

[Click Here For Solution](telephone_bill.c)

[Back to Top ↑](#content)

<!-- ### .

Test Data:

Expected Output:

[Click Here For Solution](.c)

[Back to Top ↑](#content)
 -->

# Loops C Programs <a name="loops"></a>

### 1. C Program to Reverse a Number Using FOR Loop

[Click Here For Solution](question_29.c)

[Back to Top &uarr;](#content)

### 2. Write a c program to check whether a given number is an Armstrong number or not.

**Example: 153 is an Armstrong number**

153 = (1 \* 1 \*1) + (5 \* 5 \* 5) + (3 \* 3 \* 3)

where:
(1 \* 1 \* 1)=1
(5 \* 5 \* 5)=125
(3 \*3 \* 3)=27

So:
1 + 125 + 27 = 153

153 is an Armstrong number

[Click Here For Solution](question_30.c)

[Back to Top &uarr;](#content)

### 3. Calculate the Sum of n Natural Numbers Using the While Loop

[Click Here For Solution](question_31.c)

[Back to Top &uarr;](#content)

### 4. Write a C Program to Print the Multiplication Table of N

[Click Here For Solution](question_32.c)

[Back to Top &uarr;](#content)

### 5. Fibonacci Series Program in C Using DO While Loop

**Fibonacci Series:** 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. Fibonacci Series is up to 10 Elements.

[Click Here For Solution](question_33.c)

[Back to Top &uarr;](#content)

### 6. GCD of Two Numbers in C | Greatest Common Divisor Program

[Click Here For Solution](question_34.c)

[Back to Top &uarr;](#content)

### 7. Program to Find LCM of Two Numbers in C Using While Loop

**Formula**

[Click Here For Solution](question_35.c)

[Back to Top &uarr;](#content)

### 8. Palindrome Program in C Using While Loop

[Click Here For Solution](question_36.c)

[Back to Top &uarr;](#content)

### 9. Count the Number of Digits of an Integer Using the While Loop

[Click Here For Solution](question_37.c)

[Back to Top &uarr;](#content)

### 10. Find a Generic Root of a Number Using While Loop

**For Example:** If user input number is 12345, then we add all the individual digits of the number i.e., 1 + 2 + 3 + 4 + 5 = 15. We got 15. Now we add individual digits of number 15 i.e., 1 + 5 = 6. So Generic Root of number 12345 is 6.

[Click Here For Solution](question_38.c)

[Back to Top &uarr;](#content)

### 11. C Program to Print The Calendar of a Month of 31 Days

**Output**

    Enter Total Numbers of Days in a Month:31

    Enter 0 for Monday:
    Enter 1 for Tuesday:
    Enter 2 for Wednesday:
    Enter 3 for Thursday:
    Enter 4 for Friday:
    Enter 5 for Saturday:
    Enter 6 for Sunday:

    Enter First Day of the month 0 to 6:5

    Mon     Tue     Wed     Thu     Fri     Sat     Sun
    _________________________________________________
    -       -       -       -       -       1       2
    3       4       5       6       7       8       9
    10      11      12      13      14      15      16
    17      18      19      20      21      22      23
    24      25      26      27      28      29      30
    31

[Click Here For Solution](question_39.c)

[Back to Top &uarr;](#content)

### 12. Check Whether a Number Is Divisible by 11 Using (Vedic Maths)

[Click Here For Solution](question_40.c)

[Back to Top &uarr;](#content)

### 13. Denomination of an Amount Using While Loop

    Logic :- The Logic Behind we have to divide a money by Above Money lets take a example Suppose money is 16108 then follow the Step We are taking a example of Indian Currency In present

    Step 1:- Then First we divide 16108  by 2000 then we get 8    ,2000 rs notes then go to step 2

    Step 2:-  After divide 2000 we get a remainder 108 The we know that 108 is not divisible by 500 so go to next step

    Step 3:- Now divide 108 by 100 then we get 1 ,100 rs note now remainder is 8 go to next step

    Step 4:- 8 is divisible by 50 and 20 nor 10 so we escape now go to next step

    Step 5:- Now divide 8 by 5 we get a 1 ,5 rs notes and remainder is 3 so go to next step

    Step 6:- Now divide 3 by 2 we get 1 ,2 rs notes and remainder is 1
    so follow the next step

    Step 7:- This is a Last step divide 1 by 1 we get zero remainder now print the total no of denomination needed and along with total no of count require to fulfill a requirement

    So for 16108 You Need to

    No.

    8 * 2000 = 16000
    1 * 100 = 100
    1 * 5 = 5
    1 * 2 = 2
    1 * 1 = 1

    Total =12 Notes For minimum Transaction

[Click Here For Solution](question_41.c)

[Back to Top &uarr;](#content)

### 14. Write a Program to print numbers 1 to n using while loop in C language

[Click Here For Solution](question_42.c)

[Back to Top &uarr;](#content)

### 15. Write a Program to print first n even numbers in C language

**HINT: Even number is divisible by 2 and generates a remainder of 0**

[Click Here For Solution](question_43.c)

[Back to Top &uarr;](#content)

### 16. Write a Program to print first n odd numbers in C language

**HINT: Odd number which is not divisible by “2”. An odd number always ends in 1, 3, 5, 7, or 9.**

[Click Here For Solution](question_44.c)

[Back to Top &uarr;](#content)

### 17. Write A Program To Accept A Number From User And Print If It Is Prime Or Not In C Language

[Click Here For Solution](question_45.c)

[Back to Top &uarr;](#content)

### 18. Write a Program to accept a number and print sum of it’s digits in C language

**Ex: 153 Sum of its digit is 9**

[Click Here For Solution](question_46.c)

[Back to Top &uarr;](#content)

### 19. Write A Program To Accept A Number From User And Print It’s Factorial In C Language

**factorial of 5 is:** 5! = 5 x 4 x 3 x 2 x 1 = 120

[Click Here For Solution](question_47.c)

[Back to Top &uarr;](#content)

### 20. Write a program to accept a number and print prime numbers between 2 and n in C language

[Click Here For Solution](question_48.c)

[Back to Top &uarr;](#content)

### 21. Write a program to print digits, alphabets in capital and lower case in C language

**[ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)**

    Digits

    0  1  2  3  4  5  6  7  8  9

    Uppercase Alphabets

    A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z

    Lowercase Alphabets

    a  b  c  d  e  f  g  h  i  j  k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z

[Click Here For Solution](question_49.c)

[Back to Top &uarr;](#content)

### 22. Write a program to print out ASCII chart on a single screen (all 256 characters from 0 to 255) in a tabular form. The ASCII code should be followed by the corresponding character in C language

**[ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)**

[Click Here For Solution](question_50.c)

[Back to Top &uarr;](#content)

### 23. Program To Print Triangular Number Series Till n

**Triangular Number Example:** 15 is Triangular Number because it can be obtained by 1+2+3+4+5+6 i.e. 1+2+3+4+5+6=15

**List of Triangular Numbers:** 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666,

[Click Here For Solution](question_51.c)

[Back to Top &uarr;](#content)

### 24. C Program to Check Whether a Number is Triangular or Not

**Triangular Number Example:** 15 is Triangular Number because it can be obtained by 1+2+3+4+5+6 i.e. 1+2+3+4+5+6=15

**List of Triangular Numbers:** 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496, 528, 561, 595, 630, 666,

[Click Here For Solution](question_52.c)

[Back to Top &uarr;](#content)

### 25. Write a C program that read 5 numbers and sum of all odd values between them.

Test Data :

    Input the first number: 11
    Input the second number: 17
    Input the third number: 13
    Input the fourth number: 12
    Input the fifth number: 5

Expected Output:

    Sum of all odd values: 46

[Click Here For Solution](sum_of_odd_number.c)

[Back to Top &uarr;](#content)

# Pattern <a name="patterns"></a>

### 1. Write A Program To Print Following Outputs In C Language

    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *

[Click Here For Solution](question_53.c)

[Back to Top &uarr;](#content)

### 2. Write A Program To Print Following Outputs In C Language

    *
    * *
    * * *
    * * * *
    * * * * *

[Click Here For Solution](question_54.c)

[Back to Top &uarr;](#content)

### 3. Write A Program To Print Following Outputs In C Language

    * * * * *
    * * * *
    * * *
    * *
    *

[Click Here For Solution](question_55.c)

[Back to Top &uarr;](#content)

### 4. Write A Program To Print Following Outputs In C Language

    * * * * *
      * * * *
        * * *
          * *
            *

[Click Here For Solution](question_56.c)

[Back to Top &uarr;](#content)

### 5. Write A Program To Print Following Outputs In C Language

            *
          * *
        * * *
      * * * *
    * * * * *

[Click Here For Solution](question_57.c)

[Back to Top &uarr;](#content)

### 6. Write A Program To Print Following Outputs In C Language

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

[Click Here For Solution](question_58.c)

[Back to Top &uarr;](#content)

### 7. Write A Program To Print Following Outputs In C Language

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

[Click Here For Solution](question_59.c)

[Back to Top &uarr;](#content)

### 8. Write A Program To Print Following Outputs In C Language

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

[Click Here For Solution](question_60.c)

[Back to Top &uarr;](#content)

### 9. Write A Program To Print Following Outputs In C Language

    1
    1 2
    1 2 3
    1 2 3 4

[Click Here For Solution](question_61.c)

[Back to Top &uarr;](#content)

### 10. Write A Program To Print Following Outputs In C Language

    1
    2 2
    3 3 3
    4 4 4 4

[Click Here For Solution](question_62.c)

[Back to Top &uarr;](#content)

### 11. Write A Program To Print Following Outputs In C Language

          A
        B B B
      C C C C C
    D D D D D D D

[Click Here For Solution](question_63.c)

[Back to Top &uarr;](#content)

### 12. Write A Program To Print Following Outputs In C Language

    A B C D E E D C B A
    A B C D     D C B A
    A B C         C B A
    A B             B A
    A                 A

[Click Here For Solution](question_64.c)

[Back to Top &uarr;](#content)

### 13. Write A Program To Print Following Outputs In C Language

    1
    1 1
    1 2 1
    1 2 3 1
    1 2 3 4 1
    1 2 3 4 5 1

[Click Here For Solution](question_65.c)

[Back to Top &uarr;](#content)

### 14. Write A Program To Print Following Outputs In C Language

    x
    x x x
    x x x x x
    x x x x x x x
    x x x x x x x x x

[Click Here For Solution](question_66.c)

[Back to Top &uarr;](#content)

### 15. Write A Program To Print Following Outputs In C Language

    * * * * * *
    *         *
    *         *
    * * * * * *

[Click Here For Solution](question_67.c)

[Back to Top &uarr;](#content)

### 16. Write A Program To Print Following Outputs In C Language

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 15

[Click Here For Solution](question_68.c)

[Back to Top &uarr;](#content)

### 17. Write A Program To Print Following Outputs In C Language

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

[Click Here For Solution](question_69.c)

[Back to Top &uarr;](#content)

### 18. Write A Program To Print Following Outputs In C Language

    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *

[Click Here For Solution](question_70.c)

[Back to Top &uarr;](#content)

### 19. Write A Program To Print Following Outputs In C Language

[Click Here For Solution](question_71.c)

[Back to Top &uarr;](#content)

### 20. Write A Program To Print Following Outputs In C Language

            * * * * *
          *       *
        *       *
      *       *
    * * * * *

[Click Here For Solution](question_72.c)

[Back to Top &uarr;](#content)

### 21. Write A Program To Print Following Outputs In C Language

        1
       2 2
      3 3 3
     4 4 4 4
    5 5 5 5 5

[Click Here For Solution](question_73.c)

[Back to Top &uarr;](#content)

### 22. Write A Program To Print Following Outputs In C Language

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5

[Click Here For Solution](question_74.c)

[Back to Top &uarr;](#content)

### 23. Write A Program To Print Following Outputs In C Language

    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

[Click Here For Solution](question_75.c)

[Back to Top &uarr;](#content)

### 24. Write A Program To Print Following Outputs In C Language

            *
          * *
        * * *
      * * * *
    * * * * *
      * * * *
        * * *
          * *
            *

[Click Here For Solution](question_76.c)

[Back to Top &uarr;](#content)

### 25. Write A Program To Print Following Outputs In C Language

    * * * * * * * * *
    * * * * * * *
    * * * * *
    * * *
    *
    * * *
    * * * * *
    * * * * * * *
    * * * * * * * * *

[Click Here For Solution](question_77.c)

[Back to Top &uarr;](#content)

### 26. Write A Program To Print Following Outputs In C Language

    * * * * * * * * *
        * * * * * * *
            * * * * *
                * * *
                    *
                * * *
            * * * * *
        * * * * * * *
    * * * * * * * * *

[Click Here For Solution](question_78.c)

[Back to Top &uarr;](#content)

```

```