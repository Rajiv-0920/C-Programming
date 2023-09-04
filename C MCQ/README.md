### 1. How many times abc print.

```c
#include <stdio.h>

int main(){

    for(int i = -1; i <= 10; i++){
        if(i < 5)
            continue;
        else
            break;
        printf("ABC");
    }

    return 0;
}
```

- [ ] Infinite times
- [ ] 11 times
- [x] 0 times
- [ ] 10 times
