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

---

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

---

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

---

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

---

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

---

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

---

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

---

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

---

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

    printf("Area of a rectangle = %d square inches \nPerimeter of a rectangle = %d inches"
    , area, perimeter);

    return 0;
}
```

---

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

---

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

---

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

---

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

---

### 14. WAP. to input paisa and convert it into rs. and paisa

> Test Data

    Enter paisa:2150

> Expected Output

    Total 21 Rs. and 50 Paisa

> Source Code

```c
#include <stdio.h>

int main(){
    int paisa, rs;

    printf("Enter paisa:");
    scanf("%d", &paisa);

    rs = paisa / 100;
    paisa = paisa % 100;

    printf("Total %d Rs. and %d Paisa", rs, paisa);

    return 0;
}
```

---

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

---

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

---

### 17. WAP. to Calculate Gross Salary of an Employee whose dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.

> Formula

Gross Salary = $b + da + o$

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

---

### 18. WAP. to print profit and profit percentage. Selling price and cost price is given by user.

> Formula

**Profit** = $selling - cost$

**Profit Percentage** = $\frac{profit} {cost} * 100$

> Test Data

> Expected Output

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

---

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

---

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

---

### 21. WAP. to show swap of two numbers.

```
i) using three variable

ii) without using third variable.

iii) swap within a single line.
```

Test Data :

    Input two number a and b: 5 10

Expected Output:

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

---

### 22. WAP. to SWAP (any format) three numbers.

```
i) using four variable

ii) without using four variable.

iii) swap within a single line.
```

Test Data:

    Enter 3 number : 5 10 15

Expected Output:

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

---

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

---

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

---

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

---

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

---

### 27. WAP. to input a 5 digit number and calculate the sum of last and first digit number.

> Test Data:

    number : 12345

> Expected Output:

    sum = 6

> Source Code

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

---

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

---

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

---

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

    printf("Kilometers = %f Meters = %f Centimeters = %f", kilometers, meters, centimeters);

    return 0;
}
```

---

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

---

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

---

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

---

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

---

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

---

<!-- ### 4.

> Test Data

> Expected Output

> Source Code

```c

```

--- -->
