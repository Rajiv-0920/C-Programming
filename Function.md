# Functions

### 1. WAP. To Accept Two Numbers From User And Print It’s Addition,Subtraction,Multiplication,Division Using Different Functions In C Language

> Test Data

    Enter 2 numbers: 10 5

> Expected Output

    Sum = 15 Sub = 5 Mul = 50 Div = 2

> Source Code

```c
#include <stdio.h>

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);

int main(){
    int x, y, sum, sub, div, mul;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum = addition(x, y);
    sub = subtraction(x, y);
    mul = multiplication(x, y);
    div = division(x, y);

    printf("Sum = %d Sub = %d Mul = %d Div = %d", sum, sub, mul, div);

    return 0;
}

int addition(int x, int y){
    return x + y;
}

int subtraction(int x, int y){
    return x - y;
}

int multiplication(int x, int y){
    return x * y;
}

int division(int x, int y){
    return x / y;
}
```

<br>

### 2. WAP. to print greatest among the two numbers.

> Test Data

    Enter 2 Numbers: 15 20

> Expected Output

    Greater number = 20

> Source Code

```c
#include <stdio.h>

int greater(int, int);

int main(){
    int x, y, max;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    max = greater(x, y);

    printf("Greater number = %d", max);

    return 0;
}

int greater(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}
```

<br>

<!--

### .

> Test Data

> Expected Output

> Source Code

```c
```

<br>
-->

### 3. Write a function to calculate factorial of a number.(Takes Something, Returns Something)

> Test Data

    Enter a number: 6

> Expected Output

    Factorial = 720

> Source Code

```c
#include <stdio.h>

int factorial(int);

int main(){
    int n, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial = %d", fact);
    return 0;
}

int factorial(int n){
    int f = 1;
    for(int i = n; i >= 1; i--){
        f *= i;
    }

    return f;
}
```

<br>

### 4. Write a function to calculate area of a circle.(Takes Something, Returns Something)

> Test Data

    Enter radius: 27

> Expected Output

    Area of a circle = 2289.000000

> Source Code

```c
#include <stdio.h>

int areaOfCircle(float);

int main(){
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = areaOfCircle(r);

    printf("Area of a Circle = %f", area);
    return 0;
}

int areaOfCircle(float r){
    float pi = 3.141;

    return pi * r * r;
}
```

<br>

### 5. Write a function to calculate sum of first N natural numbers. (all four ways: TNRN, TSRN, TNRS, TSRS)

> Test Data

    Enter the value of n: 10

> Expected Output

    Sum = 55

> Source Code

```c
#include <stdio.h>

int sumOfNaturalNumber(int);

int main(){
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = sumOfNaturalNumber(n);

    printf("Sum = %d", sum);

    return 0;
}

int sumOfNaturalNumber(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
```

<br>

### 6. Write a function to calculate sum of squares of first N natural numbers.(all four ways: TNRN, TSRN, TNRS, TSRS)

> Test Data

    Enter the value of n: 5

> Expected Output

    Sum of square of natural = 55

> Source Code

```c
#include <stdio.h>

int sumOfSquareOfNatural(int);

int main(){
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = sumOfSquareOfNatural(n);

    printf("Sum of square of natural = %d", sum);

    return 0;
}

int sumOfSquareOfNatural(int n){
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i * i;
    }

    return sum;
}
```

<br>

### 7. Write a function to express a given number as a sum of two prime numbers. Print all possible solutions

> Test Data

    Enter a number: 34

> Expected Output

    3 + 31 = 34
    5 + 29 = 34
    11 + 23 = 34
    17 + 17 = 34

> Source Code

```c
#include <stdio.h>

int isPrime(int);

int main(){
    int num, subVal, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num/2; i++){
        flag = 1;

        if(isPrime(i)){
            subVal = num - i;
            if(isPrime(subVal)){
                printf("\n%d + %d = %d", i, subVal, i + subVal);
            } else{
                flag = 0;
            }
        }
    }

    if(flag == 0){
        printf("Sum of prime possible number is 0");
    }

    return 0;
}

int isPrime(int n){
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
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