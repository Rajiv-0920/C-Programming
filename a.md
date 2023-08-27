### 33. WAP. to SWAP (interchange) three numbers.

```
i) using four variable

ii) without using four variable.

iii) swap within a single line.
```

Test Data:

    Enter 3 number : 5 10 15

Expected Output:

    changed number = 15 5 10

Solution :-

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
    a = (temp = a + b + c) - (b = temp - b - c) - (c = temp - b - c);

    printf("Changed number = %d %d %d", a, b , c);

    return 0;
}
```

[Back to Top ↑](#content)

### 34. WAP. to Print the range of a number. E.g. number 78 is between 70 and 79, 102 is between 100 and 109.

Test Data:

    Enter a number : 78

    Enter a number : 102

Expected Output:

    78 number is between 70 and 79

    102 number is between 100 and 109

Solution :-

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

[Back to Top ↑](#content)

### 35. WAP. to merge three number. E.g. a= 1, b= 2, c = 8 is 128.

Test Data:

    Enter 3 number: 1 2 3

Expected Output:

    merge number = 123

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

[Back to Top ↑](#content)

### 36. WAP. to input paisa and convert it into rs. and paisa

Test Data:

    input paisa: 1550

Expected Output:

    15 rs. 50 paisa

Solution :-

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

[Back to Top ↑](#content)
