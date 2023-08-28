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

[Back to Top &uarr;](#content)

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
