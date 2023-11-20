# Switch Case Statement

### 1. Compute the following:

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit

Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reappear. Unless the user selects the ‘Exit’ option the program should continue to run.

**Hint:** Make use of an infinite while and a switch statement.

> Test Data

    Enter a character: (Factorial 'f' Prime 'p' Even or Odd 'e' or Exit ''): f

    Enter a number: 5
    Factorial = 120
    Enter a character: (Factorial 'f' Prime 'p' Even or Odd 'e' or Exit ''): p

    Enter a number: 15

    Not a Prime Number
    Enter a character: (Factorial 'f' Prime 'p' Even or Odd 'e' or Exit ''): t

> Source Code

```c
#include <stdio.h>

int main(){
    char ch;
    int a = 1, flag = 1, num, fact = 1;

    while(a){
        printf("\nEnter a character:
        (Factorial 'f' Prime 'p' Even or Odd 'e' or Exit ''): ");
        scanf(" %c", &ch);

        switch(ch){
            case 'f':
                    printf("\nEnter a number: ");
                    scanf("%d", &num);

                    for(int i = num; i >= 1; i--){
                        fact *= i;
                    }

                    printf("Factorial = %d", fact);
                    break;
            case 'p':
                    printf("\nEnter a number: ");
                    scanf("%d", &num);

                    for(int i = 2; i <= num / 2; i++){
                        flag = 1;
                        if(num % i == 0){
                            flag = 0;
                            break;
                        }
                    }

                    if(flag == 1){
                        printf("\nPrime Number");
                    } else {
                        printf("\nNot a Prime Number");
                    }
                    break;
            case 'e':
                    printf("\nEnter a number: ");
                    scanf("%d", &num);

                    if(num % 2 == 0){
                        printf("\nEven Number");
                    } else{
                        printf("\nOdd Number");
                    }
                    break;
            default:
                a = 0;
    }
    }
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