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

### 2. Write a program to accept values of two numbers and print their addition, subtraction, multiplication, division.

**Addition:** x + y;

**Subtraction:** x - y;

**multiplication:** x \* y;

**division:** x / y;

[Click Here For Solution](question_2.c)

[Back to Top &uarr;](#content)

### 3. Write a program to accept a number from user and print it’s square & cube in C language

**Square:** x \* x

**Cube:** x \* x \* x

[Click Here For Solution](question_3.c)

[Back to Top &uarr;](#content)

### 4. Write a program to accept two values a & b and interchange their values in C language

**Before Interchange value:** a = 12; b = 15

**After Interchange value:** a = 15; b = 12

[Click Here For Solution](question_4.c)

[Back to Top &uarr;](#content)

### 5. Write a program to accept roll no & marks of 3 subjects of a student, Calculate total 3 subjects and average in c language

$Average: Sanskrit + Hindi + Math / 3$

[Click Here For Solution](question_5.c)

[Back to Top &uarr;](#content)

### 6. Print following outputs: http:\\www.kodegod.com\new in C language

[Click Here For Solution](question_6.c)

[Back to Top &uarr;](#content)

### 7. Area and Circumference of a Circle

Area of the Circle is: $πr^2$

Circumstances of the Circle are: $2π r$

[Click Here For Solution](question_7.c)

[Back to Top &uarr;](#content)

### 8. Print Ascii Value of the Character

[Click Here For Solution](question_8.c)

[Back to Top &uarr;](#content)

### 9. Write a program to print area of a triangle

**Triangle =** $0.5 * Base * Height$

[Click Here For Solution](question_9.c)

[Back to Top &uarr;](#content)

### 10. Convert a Person’s Name in Abbreviated

**Name:** Ghanendra Pratap Singh

**Abbreviated Name:** G. P. Singh

[Click Here For Solution](question_10.c)

[Back to Top &uarr;](#content)

### 11. C Program For Calculate Simple Interest

**Simple Interest** = ( Principal Amount \* Rate of Interest \* Time ) / 100;

[Click Here For Solution](question_11.c)

[Back to Top &uarr;](#content)

### 12. Write a program to accept a name and basic salary of an employee calculate and display the gross salary Program in C.

**Gross Salary** = Basic_Salary + HRA + Other_Allowance.

[Click Here For Solution](question_12.c)

[Back to Top &uarr;](#content)

### 13. Calculate Percentage of 5 Subjects

**percentage =** $((sanskrit + hindi + math + english + accountancy) / 500) * 100$

[Click Here For Solution](question_13.c)

[Back to Top &uarr;](#content)

### 14. C Program For Converting Temperature Celsius Into Fahrenheit

**Fahrenheit =** $((9/5) * Celsius) + 32$ or you can use `1.8` in place of `9/5`

[Click Here For Solution](question_14.c)

[Back to Top &uarr;](#content)

### 15. First Three Powers (N, N \* N, N \* N \* N) Without Using Power Function

**Three Powers:** (N, N \* N, N \* N \* N)

[Click Here For Solution](question_15.c)

[Back to Top &uarr;](#content)

### 16. Write a C program input a number to compute the perimeter and area of a rectangle.

**Perimeter of the rectangle** = $2(height + width)$;

**Area of Rectangle** = $height * width$;

[Click Here For Solution](question_16.c)

[Back to Top &uarr;](#content)

### 17. Write a C program to accept 3 characters and print the sum of their [ascii](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html).

[Click Here For Solution](sum_of_3_ascii_character.c)

[Back to Top &uarr;](#content)

### 18. Write a C program to convert specified days into years, weeks and days.

Note: Ignore leap year.

[Click Here For Solution](days_into_year.c)

[Back to Top &uarr;](#content)

### 19. Write a C program to calculate the distance between the two points

Formula:- $\sqrt{(x_1 - x_2)^2 + (y_1 + y_2)^2}$

Test Data :

    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10

Expected Output:

    Distance between the said points: 11.1803

[Click Here For Solution](distance_between_two_points.c)

[Back to Top &uarr;](#content)

### 20. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

Test Data :

    Input the amount: 375

Expected Output:

    There are:
    3 Note(s) of 100.00
    1 Note(s) of 50.00
    1 Note(s) of 20.00
    0 Note(s) of 10.00
    1 Note(s) of 5.00
    0 Note(s) of 2.00
    0 Note(s) of 1.00

[Click Here For Solution](break_amount_into_smallest.c)

[Back to Top &uarr;](#content)

### 21. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

Test Data :

    Input seconds: 25300
    Expected Output:
    There are:
    H:M:S - 7:1:40

[Click Here For Solution](seconds_to_hours_minute.c)

[Back to Top &uarr;](#content)

### 22. Write a C program to convert a given integer (in millimeters) to kilometers, meters and centimeters.

    1 centimeter = 10 millimeters.
    1 meter = 100 centimeters.
    1 meter = 1,000 millimeters.
    1 kilometer = 1,000 meters.

Test Data :

    Input no. of days: 2535220

Expected Output:

    2.53 kilometers
    2535.22 Meters
    253522.0 Centimeters

[Click Here For Solution](millimeters_to_kilometers_meters_centimeters.c)

[Back to Top &uarr;](#content)

### 23. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

Test Data :

    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4

Expected Output:

    Average Value = 19.444444

[Click Here For Solution](average_value_of_item.c)

[Back to Top &uarr;](#content)

### 24. Program to show swap of two number

```
i) using three variable

ii) without using third variable.

iii) swap withing a single line.
```

Test Data :

    Input two number a and b: 5 10

Expected Output:

    a = 10 and b = 5

[Click Here For Solution](swap_two_number.c)

[Back to Top &uarr;](#content)

### 25. Write a program to display last digit of a number. Number is entered through keyboard.

[Click Here For Solution](last_digit.c)

[Back to Top &uarr;](#content)

### 26. Write a program to calculate sum of the digits of three digit number.

[Click Here For Solution](sum_of_three_digit.c)

[Back to Top &uarr;](#content)

### 27. Write a program to print profit and profit percentage. Selling price and cost price is given by user.

formula :-

$profit = selling - cost$

$profitPercentage = \frac{profit} {cost} * 100$

[Click Here For Solution](profit_percentage.c)

[Back to Top &uarr;](#content)

### 28. Input a number and change the sign.

Test Data:

    input number : 10
    input number : -15

Expected Output:

    Sign Changed number = -10
    Sign Changed number = 15

[Click Here For Solution](sign-changing.c)

[Back to Top ↑](#content)

### 29. Input two number and display quotient and remainder.

Test Data:

    input number : 98 4

Expected Output:

    quotient = 24
    remainder = 2

[Click Here For Solution](quotient_remainder.c)

[Back to Top ↑](#content)

### 30. Input a 5 digit number and calculate the sum of last and first digit number.

Test Data:

    number : 12345

Expected Output:

    sum = 6

[Click Here For Solution](sum_of_Last_First_digit.c)

[Back to Top ↑](#content)

### 31. Input a 3 digit number and reverse it.

Test Data:

    number = 123

Expected Output:

    reverse number = 321

[Click Here For Solution](reverse_3Digit_number.c)

[Back to Top ↑](#content)

### 32. WAP to calculate the remainder of 2 numbers without using % operator.

Test Data:

    Enter 2 number: 10 5

Expected Output:

    Remainder = 0

[Click Here For Solution](get_remainder_without_%.c)

[Back to Top ↑](#content)

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

**Avg>=60** Grade A

**Avg<60, Avg>=50** Grade B

**Avg<50, Avg>=40** Grade C Grade F.

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
