# Patterns

### 1. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *

> Source Code

```c
# include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 2. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    *
    * *
    * * *
    * * * *
    * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 3. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * *
    * * * *
    * * *
    * *
    *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 4. WAP. to print the following pattern

> Test Data

    Enter the value of n: 4

> Expected Output

          *
        * *
      * * *
    * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 5. WAP. to print the following pattern

> Test Data

    Enter the value of n: 4

> Expected Output

    * * * *
      * * *
        * *
          *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        for(int j = n; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 6. WAP. to print the following pattern

> Test Data

    Enter the value of n: 4

> Expected Output

    *
    * * *
    * * * * *
    * * * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i + (i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 7. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= n - i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 8. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            *
          * *
        * * *
      * * * *
    * * * * *
      * * * *
        * * *
          * *
            *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= i; j++){
            printf("  ");
        }
        for(int j = n - i; j >= 1; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 9. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= (i * 2) - 1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= (i * 2) - 1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 10. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * * * * * *
    * * * * * * *
    * * * * *
    * * *
    *
    * * *
    * * * * *
    * * * * * * *
    * * * * * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= (2 * i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 11. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * * * * * *
        * * * * * * *
            * * * * *
                * * *
                    *
                * * *
            * * * * *
        * * * * * * *
    * * * * * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (i - 1) * 2; j++){
            printf("  ");
        }
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= 2 * (n - i) - 2; j++){
            printf("  ");
        }
        for(int j = 1; j <= (2 * i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 12. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * * * * * *
      * * * * * * *
        * * * * *
          * * *
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("  ");
        }
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(int i = 1; i <= n - 1; i++){
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
        for(int j = 1; j <= (2 * i) + 1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 13. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    * * * * *
    *       *
    *       *
    *       *
    * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || j == 1){
                printf("*");
            } else if(i == n || j == n){
                printf("*");
            }

            if(i != 1 && j != 1 && i != n && j != n){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 14. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    A
    A B
    A B C
    A B C D
    A B C D E

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = 65;
        for(int j = 1; j <= i; j++){
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 15. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    A
    B C
    D E F
    G H I J
    K L M N O

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a = 65;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 16. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            A
          A B
        A B C
      A B C D
    A B C D E

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = 65;
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%c", a++);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 17. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    E
    D E
    C D E
    B C D E
    A B C D E

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = 65;
        for(int j = n - i; j < n; j++){
            printf("%c", a + j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 18. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            E
          D E
        C D E
      B C D E
    A B C D E

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = 65;
        for(int j = n - i; j >= 1; j--){
            printf(" ");
        }
        for(int j = n - i; j < n; j++){
            printf("%c", a + j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 19. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    A
    B C
    C D E
    D E F G
    E F G H I

> Source Code

```c
#include <stdio.h>

int main(){
    int n, a;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        a = 65 + i - 1;
        for(int j = 1; j <= i; j++){
            printf("%c", a++);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 20. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1 2 3 4 5
    2 3 4 5 6
    3 4 5 6 7
    4 5 6 7 8
    5 6 7 8 9

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n + i - 1; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 21. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    5 4 3 2 1
    6 5 4 3 2
    7 6 5 4 3
    8 7 6 5 4
    9 8 7 6 5

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= 5; i++){
        for(int j = n + i - 1; j >= i; j--){
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 22. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1 2 3 4 5
    2 4 6 8 10
    3 6 9 12 15
    4 8 12 16 20
    5 10 15 20 25

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1 + i - 1; j <= n * i; j += i){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 23. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1 2 3 4 5
    2 3 4 5 6
    4 5 6 7 8
    7 8 9 10 11
    11 12 13 14 15

> Source Code

```c
#include <stdio.h>

int main(){
    int n, temp, count = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        temp = count;
        for(int j = 1; j <= n; j++){
            printf("%d ", count);
            count++;
        }
        count = temp + i;
        printf("\n");
    }

    return 0;
}
```

<br>

### 24. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1=1
    1+2=3
    1+2+3=6
    1+2+3+4=10
    1+2+3+4+5=15

> Source Code

```c
#include <stdio.h>

int main(){
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = 0;
        for(int j = 1; j <= i; j++){
            sum += j;
            printf("%d", j);
            if(j == i)
                printf("=%d", sum);
            else
                printf("+");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 25. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            1=1
          1+2=3
        1+2+3=6
      1+2+3+4=10
    1+2+3+4+5=15

> Source Code

```c
#include <stdio.h>

int main(){
    int n, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = 0;
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            sum += j;
            printf("%d", j);
            if(j == i)
                printf("=%d", sum);
            else
                printf("+");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 26. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 27. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    2 3
    3 4 5
    4 5 6 7
    5 6 7 8 9

> Source Code

```c
#include <stdio.h>

int main(){
    int n, count = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        count = i;
        for(int j = 1; j <= i; j++){
            printf("%2d", count++);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 28. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    2 1
    1 2 1
    2 1 2 1
    1 2 1 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("2 ");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 29. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            printf("%2d", j%2);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 30. WAP. to print the following pattern

> Test Data

    Enter the value of n:

> Expected Output

    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%2d", j%2);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 31. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

> Source Code

```c
#include <stdio.h>

int main(){
    int n, count = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%2d ", count++);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 32. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = n - (i - 1); j <= n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 33. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= n - (i - 1); j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 34. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 35. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf("  ");
        }
        for(int j = i; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 36. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i + (i - 1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 37. WAP. to print the following pattern

> Test Data

    Enter the value of n: 3

> Expected Output

         *
       * * *
     * * * * *
     * * * * *
       * * *
         *

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            printf(" ");
        }
        for(int j = 1; j <= i + (i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf(" ");
        }
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 38. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        for(int j = i - 1; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 39. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

            5
          5 4 5
        5 4 3 4 5
      5 4 3 2 3 4 5
    5 4 3 2 1 2 3 4 5

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            printf("  ");
        }
        for(int j = n; j >= n - i + 1; j--){
            printf("%d ", j);
        }
        for(int j = n - i + 1; j < n; j++){
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}
```

<br>

### 40. WAP. to print the following pattern

> Test Data

    Enter the value of n: 3

> Expected Output

        1
      1 2 1
    1 2 3 2 1
    1 2 3 2 1
      1 2 1
        1

> Source Code

```c
#include <stdio.h>

int main(){
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i + 1; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for(int j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    for(int i = n; i >= 1; i--){
        for(int j = i; j <= n; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for(int j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
```

<br>

### 41. WAP. to print the following pattern

> Test Data

    Enter the value of n: 5

> Expected Output

    1 2 3 4 5
    2       4
    3       3
    4       2
    5 4 3 2 1

> Source Code

```c
#include <stdio.h>

int main(){
    int n, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    c = n;
    for(int i = 1; i <= n; i++){
        if(i == n){
            c = n;
        }
        for(int j = 1; j <= n; j++){
            if(i == 1){
                printf("%d ", j);
            } else if(j == 1){
                printf("%d ", i);
            } else if(j == n || i == n){
                printf("%d ", --c);
            } else {
                printf("  ");
            }

        }
        printf("\n");
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

