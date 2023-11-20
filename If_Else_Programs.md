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

    Total Profit = 25 and Percentage of Profit = 125%

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
        printf("\nGrade is 'B'.");
    else if(marks >= 50)
        printf("\nGrade is 'C'.");
    else if(marks >= 35)
        printf("\nGrade is 'D'.");
    else
        printf("\nGrade is 'F'.");
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

### 23. WAP. to print the second largest out of three numbers.

> Test Data

    Enter 3 numbers: 45 99 53

> Expected Output

    Second largest number = 53

> Source Code

```c
#include <stdio.h>

int main(){
    int num1, num2, num3, secLargest;

    printf("Enter 3 numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    if((num1 < num3 || num1 < num2) &&
       (num1 > num2 || num1 > num3))
        secLargest = num1;
    else if((num2 < num3 || num2 < num1) &&
            (num2 > num1 || num2 > num3))
        secLargest = num2;
    else
        secLargest = num3;

    printf("\nSecond Largest number = %d", secLargest);

    return 0;
}
```

<br>

### 24. WAP. to compute the pension of an employee.

**_If the person is male._**

| Age       | Pension         |
| --------- | --------------- |
| Age >= 90 | pension is 4000 |
| Age >= 60 | pension is 6000 |
| Age < 60  | pension is 0    |

**_If the person is female._**

| Age       | Pension         |
| --------- | --------------- |
| Age >= 90 | pension is 3000 |
| Age >= 60 | pension is 5000 |
| Age < 60  | pension is 0    |

> Test Data

    Enter Your Age and Gender: 99 f

> Expected Output

    Pension = 3000

> Source Code

```c
#include <stdio.h>

int main(){
    int age, pension;
    char gender;

    printf("\nEnter Your Age and Gender: ");
    scanf("%d %c", &age, &gender);

    if(age >= 90){
        if(gender == 'm')
            pension = 4000;
        else if(gender == 'f')
            pension = 3000;
        else
            printf("\nEnter a Valid Gender.");
    } else if(age >= 60){
        if(gender == 'm')
            pension = 6000;
        else if(gender == 'f')
            pension = 5000;
        else
            printf("\nEnter a Valid Gender.");
    } else {
        pension = 0;
    }

    printf("\nPension = %d", pension);
    return 0;
}
```

<br>

### 25. WAP. to check whether a 3 digit number is a magic number or not. (Palindrome) A number is a magic number if its reverse is same as the original number.

> Test Data

    Enter number 121

> Expected Output

    121 is a magic number

> Source Code

```c
#include <stdio.h>

int main(){
    int num, rev, temp;

    printf("\nEnter a number:");
    scanf("%d", &num);

    temp = num;

    rev = num % 10;
    temp = temp / 10;
    rev = (rev * 10) + temp % 10;
    rev = (rev * 10) + temp / 10;

    printf("%d %d", rev, num);
    if(rev == num)
        printf("\n%d is a magic number.", num);
    else
        printf("\n%d is not a magic number.", num);

    return 0;
}
```

<br>

### 26. WAP. to Find the absolute value of a number entered through the keyboard.

> Test Data

    Enter a number: 11
    Enter a number: -23

> Expected Output

    Absolute number = 11
    Absolute number = 23

> Source Code

```c
#include <stdio.h>

int main(){
    int num;

    printf("\nEnter a number:");
    scanf("%d", &num);

    if(num < 0)
        num = num * -1;

    printf("Absolute number = %d", num);
    return 0;
}
```

<br>

### 27. WAP. to to accept users marital status, gender and age to check if he/she is eligible for marriage or not.

> Test Data

    Enter MaritalStatus: m (married) / u (unmarried): u
    Enter your gender: m (male) / f (female): m
    Enter your age: 24

> Expected Output

    You can marry!

> Source Code

```c
#include <stdio.h>

int main(){

    int age;
    char maritalStatus, gender;

    printf("\nEnter MaritalStatus: m (married) / u (unmarried): ");
    scanf(" %c", &maritalStatus);

    printf("\nEnter your gender: m (male) / f (female): ");
    scanf(" %c", &gender);

    printf("\nEnter your age: ");
    scanf(" %d", &age);

    if(maritalStatus == 'm')
        printf("\nYou can not marry!");
    else if(maritalStatus == 'u'){
        if(gender == 'm'){
            if(age >= 21)
                printf("\nYou can marry!");
            else
                printf("\nYou can not marry!");
        } else if(gender == 'f'){
            if(age >= 18)
                printf("\nYou can marry!");
            else
                printf("\nYou can not marry!");
        } else
            printf("\nEnter valid gender: ");
    } else
        printf("\nEnter valid Marital Status: ");
    return 0;
}
```

<br>

### 28. WAP. to Count the total numbers of notes in given amount.

> Test Data

    Enter the amount: 375

> Expected Output

    2000 = 0
    500 = 2
    200 = 1
    100 = 0
    50 = 0
    20 = 1
    10 = 0
    5 = 0
    2 = 0
    1 = 1

> Source Code

```c
#include <stdio.h>

int main(){
    int amount, twoThousand = 0, fiveHundred = 0, twoHundred = 0,
    oneHundred = 0, fifty = 0, twenty = 0, ten = 0,
    five = 0, two = 0, one = 0;

    printf("\nEnter amount:");
    scanf("%d", &amount);

    if(amount > 2000){
        twoThousand = amount / 2000;
        amount = amount % 2000;
    }

    if(amount > 500){
        fiveHundred = amount / 500;
        amount = amount % 500;
    }

    if(amount > 200){
        twoHundred = amount / 200;
        amount = amount % 200;
    }

    if(amount > 100){
        oneHundred = amount / 100;
        amount = amount % 100;
    }

    if(amount > 50){
        fifty = amount / 50;
        amount = amount % 50;
    }

    if(amount > 20){
        twenty = amount / 20;
        amount = amount % 20;
    }

    if(amount > 10){
        ten = amount / 10;
        amount = amount % 10;
    }

    if(amount > 5){
        five = amount / 5;
        amount = amount % 5;
    }

    if(amount > 2){
        two = amount / 2;
        amount = amount % 2;
    }

    if(amount >= 1){
        one = amount;
    }

    printf("\n2000 = %d", twoThousand);
    printf("\n500 = %d", fiveHundred);
    printf("\n200 = %d", twoHundred);
    printf("\n100 = %d", oneHundred);
    printf("\n50 = %d", fifty);
    printf("\n20 = %d", twenty);
    printf("\n10 = %d", ten);
    printf("\n5 = %d", five);
    printf("\n2 = %d", two);
    printf("\n1 = %d", one);
    return 0;
}
```

<br>

### 29. WAP. to determine whether the given character is a capital letter, a small case letter, a digit or a special symbol.

> Hint

[**_ASCII_**](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html) value of the **digit** is between **48 to 58** and **lowercase characters** in the range of **97 to 122**, and **uppercase** is between **65 and 90**, and **special symbol** is between **(32 to 47, 58 to 64, 91 to 96, 123 to 127).**

> Test Data

    Enter Any Character: c

> Expected Output

    Character is 'Lowercase'.

> Source Code

```c
#include <stdio.h>

int main(){

    char ch;

    printf("Enter Any Character: ");
    scanf("%c", &ch);

    if(ch >= 48 && ch < 58){
        printf("Character is 'Digit'.");
    } else if(ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64
     ||ch >= 91 && ch <= 96 ||ch >= 123 && ch <= 127){
        printf("Character is 'Special Character'.");
    } else if(ch >= 65 && ch <= 90){
        printf("Character is 'UpperCase'.");
    } else if(ch >= 97 && ch <= 121){
        printf("Character is 'Lowercase'.");
    }

    return 0;
}
```

<br>

### 30. WAP. to input the length and breadth of a rectangle, find whether the area of the rectangle is greater than its perimeter.

> Test Data

    Enter the length and breadth of a rectangle: 5 4

> Expected Output

    Area of rectangle is greater than its perimeter.

> Source Code

```c
#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("\nEnter the length and breadth of a rectangle:");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    if(area > perimeter)
        printf("\nArea is greater than it's perimeter.");
    else
        printf("\nArea is not greater than it's perimeter.");

    return 0;
}
```

<br>

### 31. WAP. to input three points (x1, y1), (x2, y2) and (x3, y3), check if all the three points fall on one straight line.

> Test Data

    Enter points (x1, y1):1 2
    Enter points (x2, y2):3 4
    Enter points (x3, y3):5 6

> Expected Output

    All the three points fall on the straight line:

> Source Code

```c
#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3, m, n;

    printf("Enter points (x1, y1):");
    scanf("%d %d", &x1, &y1);

    printf("Enter points (x2, y2):");
    scanf("%d %d", &x2, &y2);

    printf("Enter points (x3, y3):");
    scanf("%d %d", &x3, &y3);

    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);

    if(m == n)
        printf("All the three points fall on the straight line:");
    else
        printf("All 3 points do not lie on the same line\n");

    return 0;
}
```

<br>

### 32. WAP. to input a point (x, y), find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).

> Condition

In point (x, y), if x = 0 and y = 0, then the point lies on the origin. If value of x is zero and y is greater than zero, then the point lies on y-axis. If y is zero and x is greater than zero, then the point lies on x-axis.

> Test Data

    Enter point (x, y): 35 20

> Expected Output

    Point (35, 20) neither lie on x-axis nor on y-axis

> Source Code

```c
#include <stdio.h>

int main(){
    int x1, y1;

    printf("Enter (x, y): ");
    scanf("%d %d", &x1, &y1);

    if(x1 == 0 && y1 == 0)
        printf("\nThe point (%d, %d) lies on the origin.", x1, y1);
    else if(x1 == 0 && y1 > 0)
        printf("\nThe point (%d, %d) lies on the y-axis.", x1, y1);
    else if(x1 > 0 && y1 == 0)
        printf("\nThe point (%d, %d) lies on the x-axis.", x1, y1);
    else
        printf("Point (%d, %d) neither lie on x-axis nor on y-axis", x1, y1);
}
```

<br>

### 33. WAP. to check whether a given number is even or odd without using modulo (%) operator

> Test Data:

    Enter a number: 12

> Expected Output:

    Even number

> Source Code

```c
#include <stdio.h>

int main(){
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    rem = num - num / 2 * 2;

    if(rem == 0)
        printf("\nEven number");
    else
        printf("\nOdd number");

    return 0;
}
```

<br>

### 34. WAP. An electricity board charges the following rates for the use of electricity:

| Unit             | Price             |
| ---------------- | ----------------- |
| first 200 units  | Rs. 0.80 per unit |
| next 100 units   | Rs. 0.90 per unit |
| Beyond 300 units | Rs. 1 per unit    |

All users are charged a minimum of Rs. 100 as meter charge.

If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.

> Test Data

    Enter number of units: 417

> Expected Output

    Total Charges = 437.05

> Source Code

```c
#include <stdio.h>

int main(){
    float units, price;

    printf("\nEnter number of units: ");
    scanf("%f", &units);

    if(units <= 200 && units > 0)
        price = units * 0.80;
    else if(units <= 300 && units > 200)
        price = 160 + (units - 200) * 0.90;
    else if(units > 300)
        price = 250 + (units - 300) * 1;
    else
        price = 0;

    price = price + 100;

    if(price > 400)
        price = price + (price * 15 / 100);

    printf("\nTotal Charges = %.2f", price);

    return 0;
}
```
<br>

<h1 align="center">Hi 👋, I'm Rajiv Kumar</h1>
<h3 align="center">A passionate frontend developer from India</h3>
 
<br>   
<h2 align="left">🌐 Connect with me:</h2>

<div align="center">
<a href="https://github.com/rajiv-0920" target="_blank">
<img src=https://img.shields.io/badge/github-%2324292e.svg?&style=for-the-badge&logo=github&logoColor=white alt=github style="margin-bottom: 5px;" />
</a>
<a href="https://twitter.com/rajiv_0920" target="_blank">
<img src=https://img.shields.io/badge/twitter-%2300acee.svg?&style=for-the-badge&logo=twitter&logoColor=white alt=twitter style="margin-bottom: 5px;" />
</a>

<a href="https://linkedin.com/in/rajiv-kumar-rk0920" target="_blank">
<img src=https://img.shields.io/badge/linkedin-%231E77B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white alt=linkedin style="margin-bottom: 5px;" />
</a>

</div>

## 💻 Tech Stack:

<p align="left"> 
<a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a>
<a href="https://www.w3schools.com/css/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/css3/css3-original-wordmark.svg" alt="css3" width="40" height="40"/> </a> 
<a href="https://www.w3.org/html/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/html5/html5-original-wordmark.svg" alt="html5" width="40" height="40"/> </a>
 <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a>
 </p>

