# Basic Simple C Programs <a name="basic"></a>

### 1. WAP(Write a program) to print "Hello World".

> Expected Output

    Hello World

> Source Code

```c
#include <stdio.h>

int main(){
    printf("Hello World");
    return 0;
}
```

<br>

### 2. WAP. to input a number and print them.

> Test Data

    Enter a number: 5

> Expected Output

    Number is 5

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("Enter a number");
    scanf("%d", &num);

    printf("Number is %d", num);

    return 0;
}
```

<br>

### 3. WAP. to accept two numbers and print their addition, subtraction, multiplication, division.

> Test Data

    Enter 2 number: 5 10

> Expected Output

    Addition = 15
    Subtraction = -5
    Multiplication = 50
    Division = 0

> Source Code

```c
#include <stdio.h>

int main(){

    int add, mul, sub, div, num1, num2;

    printf("\nEnter 2 number:");
    scanf("%d %d", &num1, &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("Addition = %d \nSubtraction = %d \nMultiplication = %d \nDivision = %d"
    , add, sub, mul, div);

    return 0;
}
```

<br>

### 4. WAP. to input a number and change the sign.

> Test Data

    Enter a number: 5
    Enter a number: -5

> Expected Output

    Changed number = -5
    Changed number = 5

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num * -1;

    printf("Changed number = %d", num);
    return 0;
}
```

<br>

### 5. WAP. to input two number and display quotient and remainder.

> Test Data

    input number : 98 4

> Expected Output

    quotient = 24
    remainder = 2

> Source Code

```c
#include <stdio.h>

int main(){
    int dividend, divisor, quotient, remainder;

    printf("Enter Dividend and Division: ");
    scanf("%d %d", &dividend, &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d Remainder = %d", quotient, remainder);

    return 0;
}
```

<br>

### 6. WAP. to display last digit of a number.

> Test Data

    Enter a number: 153

> Expected Output

    Last digit = 3

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = num % 10;

    printf("Last digit = %d", num);

    return 0;
}
```

<br>

### 7. WAP. to accept a number from user and print it’s square & cube in C language.

> Test Data

    Enter a number = 5

> Expected Output

    Square = 25 Cube = 125

> Source Code

```c
#include <stdio.h>

int main(){

    int num, cube, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;
    square = num * num;

    printf("Square: %d Cube: %d \n", square, cube);

    return 0;
}
```

<br>

### 8. WAP. to calculate Area and Circumference of a Circle.

> Formula

**Area of a Circle** = $πr^2$

**Circumference of a circle** = $2πr$

> Test Data

    Enter Radius: 15

> Expected Output

    Area of a circle = 78.525002
    Circumference of a circle = 31.410000

> Source Code

```c
#include <stdio.h>

int main(){

    float area, circum, radius, pi = 3.14153;

    printf("\nEnter Radius: ");
    scanf("%f", &radius);

    area = radius * radius * pi;
    circum = 2 * pi * radius;

    printf("Area of the circle: %f \n", area);
    printf("Circumference of the circle: %f \n", circum);

    return 0;
}
```

<br>

### 9. WAP. to input a number to compute the perimeter and area of a rectangle.

> Formula

**Perimeter of the rectangle** = $2(height + width)$

**Area of Rectangle** = $height * width$

> Test Data

    Enter height and width of the rectangle respectively: 12 5

> Expected Output

    Area of a rectangle = 60 square inches
    Perimeter of a rectangle = 34 inches

> Source Code

```c
#include <stdio.h>

int main(){
    int height, width, area, perimeter;

    printf("Enter height and width of the rectangle respectively: ");
    scanf("%d %d", &height, &width);

    area = height * width;
    perimeter = 2 * (height + width);

    printf("Area of a rectangle = %d square inches
    \nPerimeter of a rectangle = %d inches", area, perimeter);

    return 0;
}
```

<br>

### 10. WAP. to Calculate Percentage of 5 Subjects.

> Test Data

    Enter marks of 5 subjects:72 93 56 80 57

> Expected Output

    Your Overall Percentage: 71.599998

> Source Code

```c
#include <stdio.h>

int main(){

    float sanskrit, math, eng, hin, accounts, percentage, total;

    printf("Enter marks of 5 subjects:");
    scanf("%f %f %f %f %f", &sanskrit, &hin, &eng, &math, &accounts);

    total = sanskrit + hin + eng + math + accounts;
    percentage = total / 500 * 100;

    printf("\nTotal Marks = %f \nYour Overall Percentage: %f", total,
    percentage);

    return 0;
}
```

<br>

### 11. WAP. to Calculate Simple Interest.

> Formula

**Simple Interest** = $(p * r * t) / 100$;

**p** = _Principal_, **r** = _Rate of interest_, **t** = _Time period_

> Test Data

    Enter Principal Amount: 4500
    Enter Rate of Interest: 9.5
    Enter Time: 6

> Expected Output

    Simple interest: 2565.000000

> Source Code

```c
#include <stdio.h>

int main(){

    float si, amount, interest, time;

    printf("Enter Principal Amount: ");
    scanf("%f", &amount);

    printf("Enter Rate of Interest: ");
    scanf("%f", &interest);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = (amount * interest * time) / 100;

    printf("Simple interest: %f", si);

    return 0;
}
```

<br>

### 12. WAP. to print area of a triangle.

> Formula

**Triangle =** $0.5 * Base * Height$

> Test Data

    Enter BASE and HEIGHT: 15 30

> Expected Output

    Area of Triangle : 225.000000

> Source Code

```c
#include <stdio.h>

int main(){

    float area, base, height;

    printf("Enter BASE and HEIGHT: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of Triangle : %f", area);

    return 0;
}
```

<br>

### 13. WAP. to accept marks of 3 subjects of a student, Calculate total of 3 subjects and average in c language

> Formula

**Average** = $Sanskrit + Hindi + Math / 3$

> Test Data

    Enter Marks of 3 subjects: 75 50 80

> Expected Output

    Total marks: 205.000000
    Average marks: 68.333336

> Source Code

```c
#include <stdio.h>

int main(){

    float sub1, sub2, sub3, average, total;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    total = (sub1 + sub2 + sub3);
    average =  total / 3;

    printf("\nTotal marks: %f", total);
    printf("\nAverage marks: %f", average);

    return 0;
}
```

<br>

### 14. WAP. to input paisa and convert it into rs. and paisa

> Test Data

    Enter paisa:2150

> Expected Output

    Total 21 ₹ and 50 Paisa

> Source Code

```c
#include <stdio.h>

int main(){
    int paisa, rs;

    printf("Enter paisa:");
    scanf("%d", &paisa);

    rs = paisa / 100;
    paisa = paisa % 100;

    printf("Total %d ₹ and %d Paisa", rs, paisa);

    return 0;
}
```

<br>

### 15. WAP. to print the following outputs: `https:\\www.google.com\` in C language

> Expected Output

    Google Link: https:\\www.google.com\

> Source Code

```c
#include <stdio.h>

int main(){

    printf("Google Link: https:\\\\www.google.com\\ ");

    return 0;
}
```

<br>

### 16. WAP. For Converting Temperature Celsius Into Fahrenheit and Fahrenheit to Celsius

> Formula

**Fahrenheit** = $((9/5) * c) + 32$ // or you can use `1.8` in place of `9/5`

**celsius** = $(f − 32) × 5/9$

> Test Data

    Enter Celsius or Fahrenheit: 55

> Expected Output

    Celsius to Fahrenheit: 131.000000
    Fahrenheit to Celsius: 12.777778

> Source Code

```c
#include <stdio.h>

int main(){
    float celFah, fahrenheit, celsius;

    printf("\nEnter Celsius or Fahrenheit: ");
    scanf("%f", &celFah);

    fahrenheit = (9.0 / 5.0 * celFah) + 32.0;
    celsius = (celFah - 32.0) * (5.0 / 9.0);

    printf("\nCelsius to Fahrenheit: %f", fahrenheit);
    printf("\nFahrenheit to Celsius: %f", celsius);

    return 0;
}
```

<br>

### 17. WAP. to Calculate Gross Salary of an Employee whose dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.

> Formula

**Gross Salary** = $b + da + o$

**b** = _Basic Salary,_ **da** = _Dearness Allowance_ **o** = _Other Allowance_

> Test Data

    Enter Basic Salary: 20000

> Expected Output

    Gross Salary = 32000

> Source Code

```c
#include <stdio.h>

int main(){

    int gs, bs, da, hra;

    printf("Enter Basic salary: ");
    scanf("%d", &bs);

    da = bs *  40 / 100;
    hra = bs * 20 / 100;
    gs = bs + da + hra;

    printf("Gross Salary = %d \n", gs);

    return 0;
}
```

<br>

### 18. WAP. to print profit and profit percentage. Selling price and cost price is given by user.>

> Formula

**Profit** = $selling - cost$

**Profit Percentage** = $\frac{profit} {cost} * 100$

> Test Data

    Enter Selling price and Cost price respectively: 200 150

> Expected Output

Total Profit = 50% and Profit percentage = 33%

> Source Code

```c
int main(){
    int profit, profitPercentage, sellingPrice, costPrice;

    printf("Enter Selling price and Cost price respectively: ");
    scanf("%d %d", &sellingPrice, &costPrice);

    profit = sellingPrice - costPrice;
    profitPercentage = (profit * 100) / costPrice;

    printf("Total Profit = %d%% and Profit percentage = %d%%",
    profit, profitPercentage);

    return 0;
}
```

<br>

### 19. WAP. to calculate the remainder of 2 numbers without using % operator.

> Test Data:

    Enter 2 number: 10 5

> Expected Output:

    Remainder = 0

> Source Code

```c
#include <stdio.h>

int main(){
    int divisor, dividend, remainder, quotient;

    printf("Enter 2 dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);

    remainder = dividend - divisor * (dividend / divisor);

    printf("\nRemainder = %d", remainder);

    return 0;
}
```

<br>

### 20. WAP. that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

> Test Data :

    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4

> Expected Output:

    Average Value = 19.444444

> Source Code

```c
#include <stdio.h>

int main(){
    float weight1, weight2, itemNum1, itemNum2, average;

    printf("Weight - Item1: ");
    scanf("%f", &weight1);

    printf("No. of Item1: ");
    scanf("%f", &itemNum1);

    printf("Weight - Item2: ");
    scanf("%f", &weight2);

    printf("No. of Item1: ");
    scanf("%f", &itemNum2);

    average = (weight1 * itemNum1 + weight2 * itemNum2) / (itemNum1 + itemNum2);

    printf("Average value of the item = %f", average);

    return 0;
}
```

<br>

### 21. WAP. to show swap of two numbers.

```
i) using three variable

ii) without using third variable.

iii) swap within a single line.
```

> Test Data :

    Input two number a and b: 5 10

> Expected Output:

    a = 10 and b = 5

> Source Code

```c
#include <stdio.h>

int main(){
    int a, b, temp;

    printf("Enter two number a and b:");
    scanf("%d %d", &a, &b);

    // swap two number using third variable.
    // temp = a;
    // a = b;
    // b = temp;

    // Swap two number without using third variable.
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // Swap two number within single line.
    b = a + b - (a = b);

    printf("a = %d and b = %d", a, b);

    return 0;
}
```

<br>

### 22. WAP. to SWAP three numbers (any format).

```
i) using four variable

ii) without using four variable.

iii) swap within a single line.
```

> Test Data:

    Enter 3 number : 5 10 15

> Expected Output:

    changed number = 15 5 10

> Source Code

```c
#include <stdio.h>

int main(){
    int a, b, c, temp;

    printf("Enter 3 number a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // using four variable
    // temp = a;
    // a = b;
    // b = c;
    // c = temp;

    // Without using four variable.
    // a = a + b + c;
    // b = a - b - c;
    // c = a - b - c;
    // a = a - b - c;

    // Swap numbers within a single line.
    a = (temp = a + b + c) - (b = temp - b - c) -
    (c = temp - b - c);

    printf("Changed number = %d %d %d", a, b , c);

    return 0;
}
```

<br>

### 23. WAP. to merge three number. E.g. a= 1, b= 2, c = 8 is 128.

> Test Data:

    Enter 3 number: 1 2 3

> Expected Output:

    merge number = 123

> Source Code

```c
#include <stdio.h>

int main(){
    int a, b, c, merge;

    printf("Enter 3 number:\n");
    scanf("%d %d %d", &a, &b, &c);

    merge = a * 10;
    merge = merge + b;
    merge = merge * 10;
    merge = merge + c;

    printf("merge number = %d", merge);

    return 0;
}
```

<br>

### 24 .WAP. to Print the range of a number. E.g. number 78 is between 70 and 79, 102 is between 100 and 109.

> Test Data:

    Enter a number : 78

    Enter a number : 102

> Expected Output:

    78 number is between 70 and 79

    102 number is between 100 and 109

> Source Code

```c
#include <stdio.h>

int main(){
    int num, x, y;

    printf("Enter a number:");
    scanf("%d", &num);

    x = num / 10 * 10;
    y = x + 9;

    printf("%d number is between %d and %d", num, x, y);

    return 0;
}
```

<br>

### 25. WAP. to input a 3 digit number and reverse it.

> Test Data:

    number = 123

> Expected Output:

    reverse number = 321

> Source Code

```c
#include <stdio.h>

int main(){
    int num, rev, rem;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem;
    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem;
    rem = num % 10;
    num = num / 10;
    rev = rev * 10 + rem;

    printf("Reverse number = %d\n", rev);

    return 0;
}
```

<br>

### 26. WAP. to calculate sum of the digits of three digit number.

> Test Data

    Enter a 3 digit number: 123

> Expected Output

    Sum = 6

> Source Code

```c
#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sum + num % 10;
    num = num / 10;
    sum = sum + num % 10;
    sum = sum + num / 10;

    printf("Sum = %d", sum);

    return 0;
}
```

<br>

### 27. WAP. to input a 5 digit number and calculate the sum of last and first digit number.

> Test Data:

    number : 12345

> Expected Output:

    sum = 6

> Source Code

```c
#include <stdio.h>

int main(){
    int num, sum;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    sum = (num % 10) + (num / 10000);

    printf("Sum = %d", sum);

    return 0;
}
```

<br>

### 28. WAP. to convert specified days into years, weeks and days.

**_Note: Ignore leap year._**

> Test Data

    Enter number of days: 415

> Expected Output

    Years = 1 Weeks = 7 Days = 1

> Source Code

```c
#include <stdio.h>

int main(){
    int days, years, weeks;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;

    printf("Years = %d Weeks = %d Days = %d", years, weeks, days);

    return 0;
}
```

<br>

### 29. WAP. to convert a given integer (in seconds) to hours, minutes and seconds.

> Test Data :

    Input seconds: 25300

> Expected Output:

    There are:
    H:M:S - 7:1:40

> Source Code

```c
#include <stdio.h>

int main(){
    int seconds, minutes, hours;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("\nThere are:\nH:M:S - %d:%d:%d", hours, minutes, seconds);

    return 0;
}
```

<br>

### 30. WAP. to convert a given integer (in millimeters) to kilometers, meters and centimeters.

    1 centimeter = 10 millimeters.
    1 meter = 100 centimeters.
    1 meter = 1,000 millimeters.
    1 kilometer = 1,000 meters.

> Test Data :

    Input millimeters: 2535220

> Expected Output:

    2.53 kilometers
    2535.22 Meters
    253522.0 Centimeters

> Source Code

```c
#include <stdio.h>

int main(){
    float millimeters, kilometers, meters, centimeters;

    printf("Enter millimeters:");
    scanf("%f", &millimeters);

    centimeters = millimeters / 10;
    meters = centimeters / 100;
    kilometers = meters / 1000;

    printf("Kilometers = %f Meters = %f Centimeters = %f",
     kilometers, meters, centimeters);

    return 0;
}
```

<br>

### 31. WAP. to read an amount (integer value) and break the amount into smallest possible number of bank notes.

> Test Data :

    Input the amount: 375

> Expected Output:

    There are:
    3 Note(s) of 100.00
    1 Note(s) of 50.00
    1 Note(s) of 20.00
    0 Note(s) of 10.00
    1 Note(s) of 5.00
    0 Note(s) of 2.00
    0 Note(s) of 1.00

> Source Code

```c
#include <stdio.h>

int main(){
    int amount, hundred, fifty, twenty, ten, five, two, one;

    printf("Enter amount: ");
    scanf("%d", &amount);

    hundred = amount / 100;
    fifty = (amount % 100) / 50;
    twenty = ((amount % 100) % 50) / 20;
    amount = ((amount % 100) % 50) % 20;
    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    two = amount / 2;
    amount = amount % 2;
    one = amount;

    printf("\n%d Note(s) of 100.00", hundred);
    printf("\n%d Note(s) of 50.00", fifty);
    printf("\n%d Note(s) of 20.00", twenty);
    printf("\n%d Note(s) of 10.00", ten);
    printf("\n%d Note(s) of 5.00", five);
    printf("\n%d Note(s) of 2.00", two);
    printf("\n%d Note(s) of 1.00", one);

    return 0;
}
```

<br>

### 32. Write a C program to calculate the distance between the two points

> Formula

$\sqrt{(x_1 - x_2)^2 + (y_1 + y_2)^2}$

> Test Data :

    Input x1: 25
    Input y1: 15
    Input x2: 35
    Input y2: 10

> Expected Output:

    Distance between the said points: 11.1803

> Source Code

```c
#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, distance;

    printf("Enter x1, y1, x2 and y2 respectively:");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("The distance between the two points = Square root(%f)", distance);

    return 0;
}
```

<br>

### 33. WAP. to Print the Ascii Value of the Character.

> Test Data

    Enter The Character: c

> Expected Output

    Value = 99

> Source Code

```c
#include <stdio.h>

int main(){
    char a;

    printf("Enter The Character: ");
    scanf("%c", &a);

    printf("Value = %d", a);

    return 0;
}
```

<br>

### 34. WAP. to accept 3 characters and print the sum of their [ascii](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html).

> Test Data

    Enter 3 character: a b c

> Expected Output

    Sum of the 3 character = 294

> Source Code

```c
#include <stdio.h>

int main(){
    char a, b, c;
    int sum;

    printf("Enter 3 character: ");
    scanf("%c %c %c", &a, &b, &c);

    sum = (int)a + (int)b + (int)c;

    printf("Sum of the 3 character = %d", sum);

    return 0;
}
```

<br>

### 35. WAP. to Display The Size of Different Data Types

| Data Type   | Size (bytes) | Range                           | Format Specifier |
| ----------- | ------------ | ------------------------------- | ---------------- |
| int         | 2            | -2,147,483,648 to 2,147,483,647 | %d               |
| long int    | 4            | -2,147,483,648 to 2,147,483,647 | %ld              |
| float       | 4            | 1.2E-38 to 3.4E+38              | %f               |
| double      | 8            | 1.7E-308 to 1.7E+308            | %lf              |
| long double | 12           | 3.4E-4932 to 1.1E+4932          | %Lf              |
| char        | 1            | -128 to 127                     | %c               |

> Source Code

```c
#include <stdio.h>

int main() {

  printf("Size of Int Data Types in C = %2d bytes \n", sizeof(short int));

  printf("Size of Long Int Data Types in C = %2d bytes \n", sizeof(long int));

  printf("Size of Float Data Types in C = %2d bytes \n", sizeof(float));

  printf("Size of Double Data Types in C = %2d bytes \n", sizeof(double));

  printf("Size of Long Double Data Types in C = %2d bytes \n", sizeof(long double));

  printf("Size of Char Data Types in C = %2d bytes \n", sizeof(char));

  return 0;
}
```

<br>
<br>
<br>
<br>

# If/Else Statement <a name="if"></a>

### 1. WAP. to print greatest among the two numbers.

> Test Data

    Enter 2 Numbers: 15 20

> Expected Output

    Greater number = 20

> Source Code

```c
#include <stdio.h>

int main(){
    int num1, num2, great;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        great = num1;
    else
        great = num2;

    printf("\nGreater number = %d", great);
    return 0;
}
```

<br>

### 2. WAP. to check the given number is positive or negative.

> Test Data

    Enter a number: 15

> Expected Output

    Number is 'Positive'.

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    if(num < 0)
        printf("number is 'Negative'.");
    else
        printf("number is 'Positive'.");
    return 0;
}
```

<br>

### 3. WAP. to check the given number is even or odd.

> Test Data

    Enter a number: 12

> Expected Output

    number is 'Even'.

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("\nEnter a number:");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("\nnumber is 'Even'.");
    else
        printf("\nnumber is 'Odd'.");
    return 0;
}
```

<br>

### 4. WAP. to check the person is eligible for vote or not.

> Test Data

    Enter your age: 17

> Expected Output

    Your are not eligible for vote.

> Source Code

```c
#include <stdio.h>

int main(){
    int age;

    printf("\nEnter your age:");
    scanf("%d", &age);

    if(age < 18)
        printf("\nYour are not eligible for vote.");
    else
        printf("\nYour are eligible for vote.");
    return 0;
}
```

<br>

### 5. WAP. to input a character and check whether it is vowel or consonant.

> Test Data

    Enter a character: a

> Expected Output

    Character is 'Vowel'.

> Source Code

```c
#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
    || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Character is 'Vowel'.");
    else
        printf("Character is 'Consonant'.");

    return 0;
}
```

<br>

### 6. WAP. to check the given year is leap year or not.

> Test Data

    Enter a year: 2023

> Expected Output

    Not a leap year

> Source Code

```c
#include <stdio.h>

int main(){
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("\nYear is Leap Year.");
    else
        printf("\nYear is Not a Leap Year.");

    return 0;
}
```

<br>

### 7. WAP. to check the given number is buzz number or not.

> Buzz number

Buzz numbers are those numbers that are **_divisible by 7_** or **_end with 7_**.

> Test Data

    Enter a number: 47

> Expected Output

    47 is a Buzz Number.

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("\nEnter a number:");
    scanf("%d", &num);

    if(num % 7 == 0 || num % 10 == 7)
        printf("%d is a Buzz number.", num);
    else
        printf("%d is not a Buzz number.", num);

    return 0;
}
```

<br>

### 8. WAP. to input cost and sales price and calculate percentage of profit or loss.

> Test Data

    Enter Cost price and Sales price : 20 45

> Expected Output

    Total Profit = 25 and Percentage of Profit =

> Source Code

```c
#include <stdio.h>

int main(){
    int costPrice, sellingPrice, profit, perProfit, loss, perLoss;

    printf("Enter Cost price and Sales price: ");
    scanf("%d %d", &costPrice, &sellingPrice);

    if(costPrice > sellingPrice){
        loss = costPrice - sellingPrice;
        perLoss = loss * 100 / costPrice;
        printf("\nTotal Loss = %d₹ and Percentage of Loss = %d%%",
        loss, perLoss);
    } else{
        profit = sellingPrice - costPrice;
        perProfit = profit * 100 / costPrice;
        printf("\nTotal Profit = %d₹ and Percentage of Profit = %d%%",
        profit, perProfit);
    }

    return 0;
}
```

<br>

### 9. WAP. to input two number and check they are proper division or not.

> Test Data

    Enter 2 numbers: 45 90
    Enter 2 numbers: 45 5

> Expected Output

    They are not a proper division.
    They are a proper division.

> Source Code

```c
#include <stdio.h>

int main(){
    int num1, num2;

    printf("\nEnter 2 number:");
    scanf("%d %d", &num1, &num2);

    if(num1 % num2 == 0)
        printf("\nThey are a proper division.");
    else
        printf("\nThey are not a proper division.");
    return 0;
}
```

<br>

### 10. WAP. to input age and marks. If age >= 18 and marks >= 80 then the student is eligible for admission otherwise not.

> Test Data

    Enter age and marks: 18 85

> Expected Output

    You are eligible for Admission.

> Source Code

```c
#include <stdio.h>

int main(){
    int age, marks;

    printf("\nEnter your age and marks:");
    scanf("%d %d", &age, &marks);

    if(age >= 18 && marks >= 80)
        printf("\nYou are eligible for admission.");
    else
        printf("\nYou are not eligible for admission.");
    return 0;
}
```

<br>

### 11. WAP. to check the given number is perfect square or not.

> Test Data

    Enter a number: 25

> Expected Output

    25 is a Perfect Square.

> Source Code

```c
#include <stdio.h>
#include <math.h>


int main(){
    int num, sqr;

    printf("\nEnter a number:");
    scanf("%d", &num);

    sqr = sqrt(num);

    if(sqr * sqr == num)
        printf("%d is a Perfect Square.", num);
    else
        printf("%d is not a Perfect Square.", num);

    return 0;
}
```

<br>

### 12. WAP. to check the given number is 3 digit number or not.

> Test Data

    Enter a number: 22

> Expected Output

    22 is not a 3 digit number

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("\nEnter a number:");
    scanf("%d", &num);

    if(num > 99 && num < 1000)
        printf("\n%d is a 3 digit number.", num);
    else
        printf("\n%d is not a 3 digit number.", num);

    return 0;
}
```

<br>

### 13. WAP. to calculate greatest among the 3 numbers.

> Test Data

    Enter 3 numbers: 15 20 25

> Expected Output

    Greater number is 25

> Source Code

```c
#include <stdio.h>

int main(){
    int num1, num2, num3, great;

    printf("\nEnter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3)
        great = num1;
    else if(num1 < num2 && num2 > num3)
        great = num2;
    else
        great = num3;

    printf("Greater number = %d", great);
    return 0;
}
```

<br>

### 14. WAP. to calculate the grade of a student after the input of marks of that student.

> Grade

Percentage >= 90 grade is **_‘A’_**

Percentage >= 70 grade is **_‘B’_**

Percentage >= 50 grade is **_‘C’_**

Percentage >= 35 grade is **_‘D’_**

Percentage < 35 grade is **_‘F’_**

> Test Data

    Enter marks: 80

> Expected Output

    Grade is 'B'.

> Source Code

```c
#include <stdio.h>

int main(){
    int marks;

    printf("\nEnter marks:");
    scanf("%d", &marks);

    if(marks >= 90)
        printf("\nGrade is 'A'.");
    else if(marks >= 70)
        printf("\nGread is 'B'.");
    else if(marks >= 50)
        printf("\nGread is 'C'.");
    else if(marks >= 35)
        printf("\nGread is 'D'.");
    else
        printf("\nGread is 'F'.");
    return 0;
}
```

<br>

### 15. WAP. to Calculate Telephone Bill:-

| calls          | Rate/call |
| -------------- | --------- |
| First 50 calls | free      |
| next 100 calls | ₹3/call   |
| next 200 calls | ₹5/call   |
| next 350 calls | ₹7/call   |

> Test Data

    Enter numbers of call: 155

> Expected Output

    Total Telephone Bill = 325

> Source Code

```c
#include <stdio.h>

int main(){
    int calls, totalBill;

    printf("\nEnter numbers of call:");
    scanf("%d", &calls);

    if(calls <= 50)
        totalBill = 0;
    else if(calls > 50 && calls < 150)
        totalBill = (calls - 50) * 3;
    else if(calls > 150 && calls < 350)
        totalBill = 300 + (calls - 150) * 5;
    else
        totalBill = 1300 + (calls - 350) * 7;

    printf("\nTotal Telephone Bill = %d", totalBill);

    return 0;
}
```

<br>

### 16. WAP. to input 3 sides of a triangle and check whether it is possible or not. It possible then check whether the triangle is an equilateral, isosceles or scalene triangle.

> Triangle

- **_Equilateral Triangle:_** A triangle is considered to be an equilateral triangle _when all three sides have the same length._
- **_Isosceles triangle:_** _When two sides of a triangle are equal or congruent_, then it is called an isosceles triangle.
- **_Scalene triangle:_** _When none of the sides of a triangle are equal_, it is called a scalene triangle.

> Test Data

    Enter 3 sides of a triangle: 2 2 1

> Expected Output

    Isosceles Triangle.

> Source Code

```c
#include <stdio.h>

int main(){
    int s1, s2, s3;

    printf("Enter 3 sides of a triangle:");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1 + s2 > s3 || s1 + s3 > s2 || s2 + s3 > s1){
        if(s1 == s2 && s2 == s3)
            printf("\nEquilateral Triangle.");
        else if(s1 != s2 && s2 != s3)
            printf("\nScalene Triangle.");
        else
            printf("\nIsosceles Triangle.");
    } else
        printf("\nNot a Valid Triangle.");
    return 0;
}
```

<br>
 
### 17. WAP. to compute income tax paid by an employee:

| Annual Salary        | Rate of Income Tax                           |
| -------------------- | -------------------------------------------- |
| up to ₹100000        | NO TAX                                       |
| ₹100001 to 150000    | 10% of amount exceeding ₹100000              |
| RS.150001 to ₹250000 | ₹5000 + 20% of the amount exceeding ₹150000  |
| Above ₹250000        | ₹25000 + 30% of the amount exceeding ₹250000 |

> Test Data

    Enter your salary: 275000

> Expected Output

    Total tax paid by him = 32500.000000

> Source Code

```c
#include <stdio.h>

int main(){
    float salary, taxableAmount;

    printf("\nEnter your salary:");
    scanf("%f", &salary);

    if(salary < 100000)
        taxableAmount = 0;
    else if(salary > 100000 && salary <= 150000)
        taxableAmount = (salary - 100000) * 10 / 100;
    else if(salary > 150000 && salary <= 250000)
        taxableAmount = 5000 + (salary - 150000) * 20 / 100;
    else
        taxableAmount = 25000 + (salary - 250000) * 30 / 100;

    printf("\nTotal Tax paid by him = %f", taxableAmount);
    return 0;
}
```

<br>

### 18. WAP. to accept three numbers from user and print them in ascending and descending order in c.

> Test Data

    Enter 3 numbers: 3 4 1

> Expected Output

    Ascending order = 4 3 1
    Descending order = 1 3 4

> Source Code

```c
#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("\nEnter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
            printf("\nAscending order: %d %d %d",
            num1, num2, num3);
            printf("\nDescending order: %d %d %d",
            num3, num2, num1);
        } else{
            printf("\nAscending order: %d %d %d",
            num1, num3, num2);
            printf("\nDescending order: %d %d %d",
            num2, num3, num1);
        }
    } else if(num2 > num1 && num2 > num3){
        if(num1 > num3){
            printf("\nAscending order = %d %d %d",
            num2, num1, num3);
            printf("\nDescending order = %d %d %d",
            num3, num1, num2);
        } else {
            printf("\nAscending order = %d %d %d",
            num2, num3, num1);
            printf("\nDescending order = %d %d %d",
            num1, num3, num2);
        }
    } else{
        if(num1 > num2){
            printf("\nAscending order = %d %d %d",
            num3, num1, num2);
            printf("\nDescending order = %d %d %d",
            num2, num1, num3);
        } else{
            printf("\nAscending order = %d %d %d",
            num3, num2, num1);
            printf("\nDescending order = %d %d %d",
            num1, num2, num3);
        }
    }

    return 0;
}
```

<br>

### 19. WAP. to check the given date is correct or not.

> Test Data

    Enter Date month and year e.g.(dd mm yyyy): 29 2 2023

> Expected Output

    29-2-2023 is not a valid date.

> Source Code

```c
#include <stdio.h>

int main(){
    int date, month, year, valid = 0;

    printf("\nEnter Date month and year (dd mm yyyy):");
    scanf("%d %d %d", &date, &month, &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        if(month == 2 && (date <= 29 && date >= 1)){
            valid = 1;
        } else {
            valid = 0;
        }
    } else {
        if(month == 2 && (date <= 28 && date >= 1)){
            valid = 1;
        } else {
            valid = 0;
        }
    }

    if(valid == 1 ||
    (((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
     month == 10 || month == 12) && (date <= 31 && date >= 1)) ||
    ((month == 4 || month == 6 || month == 9 || month == 11) &&
     (date <= 30 && date >= 1))))
        printf("\n%d-%d-%d is a Valid Date.",
         date, month, year);
    else
        printf("\n%d-%d-%d is not a Valid Date.",
     date, month, year);

    return 0;
}
```

<br>

### 20. WAP. to input week number and print weekday.

> Test Data

    Enter Week number: 4

> Expected Output

    Thursday

> Source Code

```c
#include <stdio.h>

int main(){
    int weekNO;

    printf("\nEnter Week number:");
    scanf("%d", &weekNO);

    if(weekNO == 1)
        printf("\nMonday");
    else if(weekNO == 2)
        printf("\nTuesday");
    else if(weekNO == 3)
        printf("\nWednesday");
    else if(weekNO == 4)
        printf("\nThursday");
    else if(weekNO == 5)
        printf("\nFriday");
    else if(weekNO == 6)
        printf("\nSaturday");
    else if(weekNO == 7)
        printf("\nSunday");
    else
        printf("\nEnter a valid week number.");

    return 0;
}
```

<br>

### 21. WAP. to input month number and print number of days in that month.

> Test Data

    Enter month number: 4

> Expected Output

    30 Days

> Source Code

```c
#include <stdio.h>

int main(){
    int monthNum, flag;

    printf("\nEnter month number:");
    scanf("%d", &monthNum);

    if(monthNum == 1 || monthNum == 3 || monthNum == 5 || monthNum == 7 ||
        monthNum == 8 || monthNum == 10 || monthNum == 12)
        flag = 1;
    else if (monthNum == 2)
        flag = 3;
    else if(monthNum == 4 || monthNum == 6
            || monthNum == 9 || monthNum == 11)
        flag = 2;
    else
        flag = 0;


    if(flag == 1)
        printf("\n31 Days");
    else if(flag == 2)
        printf("\n30 Days");
    else if(flag == 3)
        printf("\n28 or 29 Days");
    else
        printf("\nNot a Valid month.");


    return 0;
}
```

<br>

### 22. WAP. to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard.

> Condition

A triangle is valid if the sum of all the three angles is **_equal to 180 degrees._**

> Test Data

    Enter 3 angles of a triangle: 90 45 45

> Expected Output

    Valid Triangle

> Source Code

```c
#include <stdio.h>

int main(){
    int a1, a2, a3;

    printf("\nEnter 3 angles of a triangle:");
    scanf("%d %d %d", &a1, &a2, &a3);

    if(a1 + a2 + a3 == 180)
        printf("\nValid Triangle");
    else
        printf("\nnot a Valid Triangle");

    return 0;
}
```

<br>

<!--
### . WAP. to

> Test Data

> Expected Output

> Source Code

```c

```

<br>
-->

<h1 align="center">Hi 👋, I'm Rajiv Kumar</h1>
<h3 align="center">A passionate frontend developer from India</h3>

<br>   
<br>   
<h2 align="left">🌐 Connect with me:</h2>

<div align="center">
<a href="https://github.com/rajiv-0920" target="_blank">
<img src=https://img.shields.io/badge/github-%2324292e.svg?&style=for-the-badge&logo=github&logoColor=white alt=github style="margin-bottom: 5px;" />
</a>
<a href="https://twitter.com/rajiv_0920" target="_blank">
<img src=https://img.shields.io/badge/twitter-%2300acee.svg?&style=for-the-badge&logo=twitter&logoColor=white alt=twitter style="margin-bottom: 5px;" />
</a>  
</div>

## 💻 Tech Stack:

<p align="left"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> <a href="https://www.w3schools.com/css/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/css3/css3-original-wordmark.svg" alt="css3" width="40" height="40"/> </a> <a href="https://www.w3.org/html/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/html5/html5-original-wordmark.svg" alt="html5" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> </p>
