# Table of Content <a name="content"></a>

1. [Basic Simple C Programs](#basic)
1. [If/Else Statement](#if)
1. [Loops](#loops)
1. [Patterns](#patterns)

# Basic Simple C Programs <a name="basic"></a>

### 1. C Program to Display The Size of Different Data Types

| Data Type   | Size (bytes) | Range                           | Format Specifier |
| ----------- | ------------ | ------------------------------- | ---------------- |
| int         | 4            | -2,147,483,648 to 2,147,483,647 | %d               |
| long int    | 4            | -2,147,483,648 to 2,147,483,647 | %ld              |
| float       | 4            | 1.2E-38 to 3.4E+38              | %f               |
| double      | 8            | 1.7E-308 to 1.7E+308            | %lf              |
| long double | 16           | 3.4E-4932 to 1.1E+4932          | %Lf              |
| char        | 1            | -128 to 127                     | %c               |

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

[Back to Top &uarr;](#content)

### 2. Write a program to accept values of two numbers and print their addition, subtraction, multiplication, division.

**Addition:** x + y;

**Subtraction:** x - y;

**multiplication:** x \* y;

**division:** x / y;

```c
#include <stdio.h>

int main(){

    int add, mul, sub, div, num1, num2;

    printf("Enter First Number: \n");
    scanf("%d", &num1);

    printf("Enter Second Number: \n");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("Addition: %d \n", add);
    printf("Subtraction: %d \n", sub);
    printf("Multiplicatin: %d \n", mul);
    printf("Division: %d \n", div);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 3. Write a program to accept a number from user and print it’s square & cube in C language

**Square:** x \* x

**Cube:** x \* x \* x

```c
#include <stdio.h>

int main(){

    int num, cube, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    cube = num * num * num;
    square = num * num;

    printf("Square: %d cube: %d \n", square, cube);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 4. Write a program to accept two values a & b and interchange their values in C language

**Before Interchange value:** a = 12; b = 15

**After Interchange value:** a = 15; b = 12

```c
#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Enter A: ");
    scanf("%d", &a);

    printf("Enter B: ");
    scanf("%d", &b);

    temp = b;
    b = a;
    a = temp;

    printf("Swap A: %d B: %d", a, b);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 5. Write a program to accept roll no & marks of 3 subjects of a student, Calculate total 3 subjects and average in c language

Average: Sanskrit + Hindi + Math / 3

```c
#include <stdio.h>

int main(){

    int roll, sanskrit, hindi, math, average, total;

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("Enter Sanskrit marks: ");
    scanf("%d", &sanskrit);

    printf("Enter Hindi marks: ");
    scanf("%d", &hindi);

    printf("Enter Math marks: ");
    scanf("%d", &math);

    total = (sanskrit + hindi + math);
    average =  total / 3;

    printf("\n\nStudent Roll No: %d", roll);
    printf("\n\nTotal marks: %d", total);
    printf("\n\nAverage marks: %d", average);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 6. Print following outputs: http:\\www.kodegod.com\new in C language

```c
#include <stdio.h>

int main(){

    printf("http:\\\\www.kodegod.com\\learn-programming");

    return 0;
}
```

[Back to Top &uarr;](#content)

### 7. Area and Circumference of a Circle

Area of the Circle is: πr \* r

Circumstances of the Circle are: 2πr

```c
#include <stdio.h>
#define PI 3.14153

int main(){

    float area, circum, radius;

    printf("\nEnter Radius: ");
    scanf("%f", &radius);

    area = radius * radius * PI;
    circum = 2 * PI * radius;

    printf("Area of the circle: %f \n", area);
    printf("Circumference of the circle: %f \n", circum);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 8. Print Ascii Value of the Character

```c
#include <stdio.h>

int main(){
    char a;

    printf("Enter The Character: ");
    scanf("%c", &a);

    printf("Value: %d", a);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 9. Write a program to print area of a triangle

**Triangle =** 0.5 \* Base \* Height

```c
#include <stdio.h>

int main(){

    int area, base, height;

    printf("Enter Base: ");
    scanf("%d",&base);

    printf("Enter Height: ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of Triangle : %d", area);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 10. Convert a Person’s Name in Abbreviated

Test Data:

    Name: Ghanendra Pratap Singh

Expected Output:

    Abbreviated Name: G. P. Singh

```c
#include<stdio.h>

int main() {

    char first_name[20], middle_name[20], last_name[20];

    printf("Enter First name, Middle name, Last name: ");
    scanf("%s %s %s", &first_name, &middle_name, &last_name);

    printf("%c. %c. %s", first_name[0], middle_name[0], last_name);
    return 0;

}
```

[Back to Top &uarr;](#content)

### 11. C Program For Calculate Simple Interest

**Simple Interest** = ( Principal Amount \* Rate of Interest \* Time ) / 100;

```c
#include <stdio.h>

int main(){

    int si, amount, intrest, time;

    printf("Enter Principal Amount: ");
    scanf("%d", &amount);

    printf("Enter Rate of Intrest: ");
    scanf("%d", &intrest);

    printf("Enter Time: ");
    scanf("%d", &time);

    si = (amount * intrest * time) / 100;

    printf("Simple intrest: %d", si);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 12. Write a program to accept a name and basic salary of an employee calculate and display the gross salary Program in C.

**Gross Salary** = Basic_Salary + HRA + Other_Allowance.

```c
#include <stdio.h>

int main(){

    char name[20];
    int grossSalary, basicSalary, da, hra;

    printf("Enter Employee Name: ");
    scanf(" %s", &name);

    printf("Enter Basic salary: ");
    scanf(" %d", &basicSalary);

    printf("Enter House Rent Allowance: ");
    scanf(" %d", &hra);

    printf("Enter Other Allowance: ");
    scanf(" %d", &da);

    grossSalary = basicSalary + da + hra;

    printf("Name: %s \n", name);
    printf("Gross Salary: %d \n", grossSalary);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 13. Calculate Percentage of 5 Subjects

**percentage =** ((sanskrit + hindi + math + english + accountancy) / 500) \* 100

```c
#include <stdio.h>

int main(){

    int sanskrit, math, eng, hin, accounts;
    float percentage;

    printf("Enter Sanskrit Marks:");
    scanf("%d", &sanskrit);
    printf("Enter Hindi Marks:");
    scanf("%d", &hin);
    printf("Enter English Marks:");
    scanf("%d", &eng);
    printf("Enter Math Marks:");
    scanf("%d", &math);
    printf("Enter Accountancy Marks:");
    scanf("%d", &accounts);

    percentage = ((float)(sanskrit + hin + eng + math + accounts) / 500 ) * 100;

    printf("\nYour Overall Percentage: %2f", percentage);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 14. C Program For Converting Temperature Celsius Into Fahrenheit

**Fahrenheit =** ((9/5) \* Celsius) + 32 or you can use `1.8` in place of `9/5`

**Celsius =** (fahrenheit - 32) \* 5 / 9

```c
#include <stdio.h>

int main(){
    float celsius, fahrenheit, calculation;

    printf("\nEnter Celsius: ");
    scanf("%f", &celsius);
    calculation = (1.8 * celsius) + 32;
    printf("\nFahrenheit: %f", calculation);

    printf("\nEnter Fahrenheit: ");
    scanf("%f", &fahrenheit);
    calculation = (fahrenheit - 32) * 5 / 9;
    printf("\nCelsius: %f", calculation);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 15. First Three Powers (n, n \* n, n \* n \* n) Without Using Power Function

**Three Powers:** (n, n \* n, n \* n \* n)

Test Data:

    Enter a number = 3

Expected Output:

    3, 9, 27

```c
#include <stdio.h>

int main(){

    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("First Three Powers %d, %d, %d", num, num * num, num * num * num);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 16. Write a C program input a number to compute the perimeter and area of a rectangle.

**Perimeter of the rectangle** = 2(height + width);

**Area of Rectangle** = height \* width;

Test Data:

    height = 7 inches;
    width = 5 inches;

Expected Output:

    Perimeter of the rectangle = 24 inches
    Area of the rectangle = 35 square inches

```c
#include <stdio.h>

int main(){
    int height, width, area, perimeter;

    printf("Enter height and width of the rectangle respectively: ");
    scanf("%d %d", &height, &width);

    area = height * width;
    perimeter = 2 * (height + width);

    printf("Area of a rectangle = %d square inches \nPerimeter of a rectangle = %d inches", area, perimeter);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 17. Write a C program to accept 3 characters and print the sum of their [ascii](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html).

Test Data:

    Enter 3 character: a b c

Expected Output:

    sum = 294

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

[Back to Top &uarr;](#content)

### 18. Write a C program to convert specified days into years, weeks and days.

Note: Ignore leap year.

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

[Back to Top &uarr;](#content)

### 21. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

Test Data :

    Input seconds: 25300

Expected Output:

    There are:
    H:M:S - 7:1:40

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

    printf("There are:\nH:M:S - %d:%d:%d", hours, minutes, seconds);

    return 0;
}
```

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

```c
#include <stdio.h>

int main(){
    float millimeters, kilometers, meters, centimeters;

    printf("Enter millimeters:");
    scanf("%f", &millimeters);

    centimeters = millimeters / 10;
    meters = centimeters / 100;
    kilometers = meters / 1000;

    printf("Kilometers = %f Meters = %f Centimeters = %f", kilometers, meters, centimeters);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 23. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

Test Data :

    Weight - Item1: 15
    No. of item1: 5
    Weight - Item2: 25
    No. of item2: 4

Expected Output:

    Average Value = 19.444444

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

[Back to Top &uarr;](#content)

### 25. Write a program to display last digit of a number. Number is entered through keyboard.

Test Data:

    123

Expected Output:

    Last digit = 3

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

[Back to Top &uarr;](#content)

### 26. Write a program to calculate sum of the digits of three digit number.

Test Data:

    123

Expected Output:

    sum = 6

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

[Back to Top &uarr;](#content)

### 27. Write a program to print profit and profit percentage. Selling price and cost price is given by user.

formula :-

profit = selling - cost

profitPercentage = profit / cost \* 100

```c
#include <stdio.h>

int main(){
    int profit, profitPercentage, sellingPrice, costPrice;

    printf("Enter Selling price and Cost price respectively: ");
    scanf("%d %d", &sellingPrice, &costPrice);

    profit = sellingPrice - costPrice;
    profitPercentage = (profit * 100) / costPrice;

    printf("Total Profit = %d and Profit percentage = %d", profit, profitPercentage);

    return 0;
}
```

[Back to Top &uarr;](#content)

### 28. Input a number and change the sign.

Test Data:

    input number : 10
    input number : -15

Expected Output:

    Sign Changed number = -10
    Sign Changed number = 15

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

[Back to Top ↑](#content)

### 29. Input two number and display quotient and remainder.

Test Data:

    input number : 98 4

Expected Output:

    quotient = 24
    remainder = 2

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

[Back to Top ↑](#content)

### 30. Input a 5 digit number and calculate the sum of last and first digit number.

Test Data:

    number : 12345

Expected Output:

    sum = 6

```c
#include <stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    sum = sum + (num % 10) + (num / 10000);

    printf("Sum = %d", sum);

    return 0;
}
```

[Back to Top ↑](#content)

### 31. Input a 3 digit number and reverse it.

Test Data:

    number = 123

Expected Output:

    reverse number = 321

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

[Back to Top ↑](#content)
