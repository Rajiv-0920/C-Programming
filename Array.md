# Arrays

### 1. WAP. to print sum of all elements.

> Test Data

    Enter length of the Array: 5

    Enter Element 1: 5

    Enter Element 2: 10

    Enter Element 3: 2

    Enter Element 4: 3

    Enter Element 5: 4

> Expected Output

    Sum = 24

> Source Code

```c
#include <stdio.h>

int calcSum(int arr[], int length){
    int sum = 0, i;
    for(i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n, i, sum;
    int arr[100];

    printf("\nEnter length of the Array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sum = calcSum(arr, n);

    printf("\nSum = %d", sum);
    return 0;
}

```

<br>

### 2. WAP. to display the sum of all odd and even numbers.

> Test Data

    Enter any 10 numbers: 10 15 20 13 30 20 55 22 33 29

> Expected Output

    Sum of Even number = 102 and Odd number = 145

> Source Code

```c
#include <stdio.h>

void evenOddSum(int arr[], int length){
  int evenSum = 0, oddSum = 0;
  for(int i = 0; i < length; i++){
    if(arr[i] % 2 == 0){
      evenSum += arr[i];
    }
    else{
      oddSum += arr[i];
    }
  }
  printf("\nSum of Even number = %d and Odd number = %d", evenSum, oddSum);
}

int main(){
  int arr[100];
  int n;

  printf("\nEnter length of the array: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("\nEnter Element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  evenOddSum(arr, n);
  return 0;
}
```

<br>

### 3. Program to find the average of n numbers using arrays

> Test Data

    Enter number of elements: 5
    Enter marks: 50 75 85 65 92

> Expected Output

    Average marks = 73.40

> Source Code

```c
#include <stdio.h>

void calcAverage(float arr[], int n){
    float sum = 0, average;

    for(int i = 0; i < n; i++){
        printf("\nEnter marks %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
        sum += arr[i];

    average = sum / n;

    printf("Average marks = %.2f", average);
}

int main(){
    int n;
    float arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    calcAverage(arr, n);
}
```

<br>
 
### 4. WAP. to find out the Largest and Second Largest element in the array.

> Test Data

    Enter number of elements: 5

    Enter element 1: 55

    Enter element 2: 12

    Enter element 3: 22

    Enter element 4: 78

    Enter element 5: 23

> Expected Output

    Largest element = 78 Second largest = 55

> Source Code

```c
#include <stdio.h>

int findMax(int arr[], int length){
    int i, max = 0;
    for(i = 0; i < length; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int findSecondLargest(int arr[], int length, int max){
    int i, secLargest = 0;
    for(i = 0;i < length;i++){
        if(arr[i] < max && secLargest < arr[i]){
            secLargest = arr[i];
        }
    }
    return secLargest;
}
int main(){
    int n, max, secLargest;
    int arr[100];

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = findMax(arr, n);
    secLargest = findSecondLargest(arr, n, max);

    printf("\nLargest element = %d Second Largest = %d", max, secLargest);
}
```

<br>

### 5. WAP. to find out the Smallest element in the array.

> Test Data

    Enter number of elements: 5

    Enter element 1: 22

    Enter element 2: 55

    Enter element 3: 59

    Enter element 4: 75

    Enter element 5: 21

> Expected Output

    Smallest element = 21

> Source Code

```c
#include <stdio.h>

int findMin(int arr[], int length){
    int i, min = arr[0];
    for(i = 0; i < length; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n, min;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("\nEnter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    min = findMin(arr, n);

    printf("\nSmallest element = %d", min);
}
```

<br>

### 6. Write a C program to print all negative elements in an array.

> Test Data

    Enter length of the array: 5
    Enter 5 elements: 1 2 -5 2 -1

> Expected Output

    -5 -1

> Source Code

```c
#include <stdio.h>

int main(){
    int arr[100];
    int i, length;

    printf("Enter length of the array: ");
    scanf("%d", &length);

    printf("Enter %d Elements\n", length);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < length; i++){
        if(arr[i] < 0){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
```

<br>

### 7. Write C program to count total number of negative elements in array.

> Test Data

    Enter length of the array: 5
    Enter 5 Element: 1 2 -3 5 -4

> Expected Output

    Total negative number = 2

> Source Code

```c
#include <stdio.h>

int main(){
    int arr[100];
    int i, length, count = 0;

    printf("Enter length of the array: ");
    scanf("%d", &length);

    printf("Enter %d Element\n", length);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < length; i++){
        if(arr[i] < 0){
            count++;
        }
    }

    printf("Total negative number = %d", count);
    return 0;
}
```

<br>

### 8. C program to insert an element at end of an Array

> Test Data

    Enter length of the array: 5
    Enter 5 element: 1 2 3 4 5
    Give a number to insert at end: 6

> Expected Output

    1 2 3 4 5 6

> Source Code

```c
#include <stdio.h>

int main(){
    int arr[100];
    int i, length, num;

    printf("Enter length of the array: ");
    scanf("%d", &length);

    printf("Enter %d Element\n", length);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    printf("Give a number to insert at end: ");
    scanf("%d", &num);
    length++;
    arr[length-1] = num;

    for(i = 0; i < length;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
```

<br>

### 9. Write C program to insert an element at beginning of an array

> Test Data

    Enter length of the array: 5
    Enter 5 element: 1 2 3 4 5
    Give a number to insert at beginning: 0

> Expected Output

    0 1 2 3 4 5

> Source Code

```c
#include <stdio.h>

int main(){
    int arr[100];
    int i, length, num;

    printf("Enter length of the array: ");
    scanf("%d", &length);

    printf("Enter %d Element\n", length);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }
    printf("Give a number to insert at beginning: ");
    scanf("%d", &num);
    length++;

    for(i = length - 1; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = num;

    for(i = 0; i < length;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
```

<br>

### 10. Write C program to insert an element in array.

> Test Data

    Enter length of the array: 3
    Enter 3 elements: 1 2 4
    Enter the position: 3
    Enter the value: 3

> Expected Output

    1 2 3 4

> Source Code

```c
#include <stdio.h>

int main(){
    int arr[100];
    int length, i, position, value;

    printf("Enter length of the array: ");
    scanf("%d", &length);

    printf("Enter %d elements: ", length);
    for(i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the value: ");
    scanf("%d", &value);

    if(position < 1 || position > length + 1){
        printf("Enter Valid position..!");
        return 0;
    }

    for(i = length; i >= position; i--){
        arr[i] = arr[i - 1];
    }
    length++;
    arr[position - 1] = value;

    for(i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
```

<br>

### 11. Write C program to print all unique element in an array.

> Test Data

    Enter length of the array: 4
    Enter 4 elements: 3 2 2 5

> Expected Output

    The unique elements found in the array are: 3 5

> Source Code

```c
#include <stdio.h>

int main(){
	int arr[100];
	int length, i, j, f;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}

	printf("\nThe unique elements found in the array are: ");
	for(i = 0;i < length; i++){
		f = 0;
		for(j = 0; j < length; j++){
			if(arr[i] == arr[j] && i != j){
				f++;
			}
		}
		if(f == 0){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
```

<br>

### 12. Write C program to sort an array in ascending order.

> Test Data

    Enter length of the array: 5
    Enter 5 elements: 2 1 5 4 3

> Expected Output

    1 2 3 4 5

> Source Code

```c
#include <stdio.h>

int main(){
    int printArray(int [], int);
    int bubbleSort(int [], int);
    int selectionSort(int [], int);
    int insertionSort(int [], int);
	int arr1[5] = {2, 4, 3, 1, 5};
    int arr2[5] =  {10, 7, 9, 8, 6};
    int arr3[5] = {14, 11, 12, 15, 13};
	int length = 5;

    // Selection Sort
    printf("\nSelection Sort: ");
    selectionSort(arr1, length);
    printArray(arr1, length);

    // Bubble Sort
    printf("\nBubble Sort: ");
    bubbleSort(arr2, length);
    printArray(arr2, length);

    // Insertion Sort
    printf("\nInsertion Sort: ");
    insertionSort(arr3, length);
    printArray(arr3, length);

	return 0;
}

int bubbleSort(int arr[], int length){
    int i, j, temp;
    for(i = 1; i < length; i++){
		for(j = 0; j < length - i; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int selectionSort(int arr[], int length){
    int temp;
	for(int i = 0; i < length - 1; i++){
		for(int j = i + 1; j < length; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int insertionSort(int arr[], int length){
    for(int i = 1; i < length; i++){
		int current = arr[i];
		int j = i - 1;
		while(arr[j] > current && j >= 0){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int printArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}
```

<br>

### 13. Write C program to copy all elements of one array to another.

> Test Data

    Enter length of the array: 5
    Enter 5 elements: 1 2 3 4 5

> Expected Output

    1st Array: 1 2 3 4 5
    2nd Array: 1 2 3 4 5

> Source Code

```c
#include <stdio.h>

void copyArray(int arr[], int arr2[], int length){
	int i;
	for(i = 0; i < length; i++){
		arr2[i] = arr[i];
	}
}

void printArray(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
}


int main(){
	int arr[100];
	int arr2[100];
	int length, i;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length;i++){
		scanf("%d", &arr[i]);
	}

	copyArray(arr, arr2, length);

	printf("\n1st Array: ");
	printArray(arr, length);
	printf("\n2nd Array: ");
	printArray(arr2, length);
	return 0;
}
```

<br>

### 14. Write C program to delete an element from an array

> Test Data

    Enter length of the array: 5
    Enter 5 elements: 1 2 4 3 4

> Expected Output

    1 2 3 4

> Source Code

```c
#include <stdio.h>

int main(){
	int arr[100];
	int length, i, position;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}

	printf("Enter position of element you want to delete: ");
	scanf("%d", &position);

	for(i = position - 1; i < length - 1;i++){
		arr[i] = arr[i + 1];
	}
	length--;

	for(i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
```

<br>

### 15. Write C program to delete all duplicate elements from an array

> Test Data

    Enter the length of the array: 10
    Enter 10 elements: 57 12 89 32 62 12 89 35 67 75

> Expected Output

    57 12 89 32 62 35 67 75

> Source Code

```c
#include <stdio.h>

int main(){
	int arr[100];
	int length, i, j, k, position;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < length; i++){
		for(j = 0; j < length; j++){
			if(arr[i] == arr[j] && i != j){
				int current = j;
				for(k = current; k < length; k++){
					arr[k] = arr[k + 1];
				}
				length--;
			}
		}
	}

	for(i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
```

<br>

### 16. Write C program to count number of each element in an array.

> Test Data

    Enter 10 elements: 57 12 89 32 62 12 89 35 67 75

> Expected Output

    57 occurs 1 times
    12 occurs 2 times
    89 occurs 2 times
    32 occurs 1 times
    62 occurs 1 times
    35 occurs 1 times
    67 occurs 1 times
    75 occurs 1 times

> Source Code

```c
#include <stdio.h>

int main(){
	int arr[100];
	int length, i, j, k, position;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < length; i++){
		int count = 1;
		for(j = 0; j < length; j++){
			if(arr[i] == arr[j] && i != j){
				count++;
				int current = j;
				for(k = current; k < length; k++){
					arr[k] = arr[k + 1];
				}
				length--;
			}
		}
		printf("\n%d occurs %d times", arr[i], count);
	}

	return 0;
}
```

<br>

### 17. Write C program count total duplicate elements in an array.

> Test Data

    Enter length of the array: 10
    Enter 10 elements: 1 1 1 2 2 3 4 3 1 5

> Expected Output

    Number of duplicate elements count = 3

> Source Code

```c
#include <stdio.h>

int main(){
	int arr[100];
	int length, i, count = 0, position, dup;

	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < length; i++){
		for(int j = 0; j < length;j++){
			if(arr[j] == arr[i] && i != j){
				if(dup != arr[j]){
					count++;
					dup = arr[j];
				}
				position = j;
				for(int k = position; k < length; k++){
					arr[k] = arr[k + 1];
				}
				length--;
			}
		}
	}

	printf("Number of duplicate elements count = %d", count); 
}
```

<br>

### 18. Write C program to merge two sorted array

> Array

    Array 1 = {9, 7, 3, 5, 1};
    Array 2 = {4, 6, 8, 10};

> Expected Output

    1 3 4 5 6 7 8 9 10

> Source Code

```c
#include <stdio.h>

void sort(int arr[], int length){
    int i, j;
    for(i = 0; i < length; i++){
        for(j = 0; j < length - 1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int length1 = 5, length2 = 4;
    int arr1[5] = {9, 7, 3, 5, 1};
    int arr2[4] = {4, 6, 8, 10};
    int arr3[length1+length2];
    int i, j = 0, k = 0;

    sort(arr1, length1);
    sort(arr2, length2);

    for(i = 0; k < length2 || j < length1; i++){
        if(arr1[j] > arr2[k]){
            arr3[i] = arr2[k];
            k++;
        } else{
            arr3[i] = arr1[j];
            j++;
        }
    }

    for(i = 0; i < length1 + length2; i++){
        printf("%d ", arr3[i]);
    }
    
    return 0;
}
```

<br>

### 19. Write C program to put even and odd elements of array in two separate array

> Array

    {55, 13, 22, 45, 67, 68, 88, 98, 19, 12}
    
> Expected Output

    Even Array: 22 68 88 98 12 
    Odd Array: 55 13 45 67 19 

> Source Code

```c
#include <stdio.h>

void printArray(int arr[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}

int isEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int arr[10] = {55, 13, 22, 45, 67, 68, 88, 98, 19, 12};
    int length = 10, i, j = 0, k = 0;
    int evenArray[100];
    int oddArray[100];

    for(i = 0; i < length;i++){
        if(isEven(arr[i])){
            evenArray[j] = arr[i];
            j++;
        } else{
            oddArray[k] = arr[i];
            k++;
        }
    }

    printf("\nEven Array: ");
    printArray(evenArray, j);

    printf("\nOdd Array: ");
    printArray(oddArray, k);

    return 0;
}
```

<br>

### 20. Write C program to find reverse of an array.

> Array

    {55, 13, 22, 45, 67, 68, 88, 98, 19, 12}

> Expected Output

    12 19 98 88 68 67 45 22 13 55
    
> Source Code

```c
#include <stdio.h>

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){      
    int arr[5] = {1, 2, 3, 4, 5};
    int length = 5, i;

    for(i = 0; i < length / 2; i++){
        swap(arr, i, length - i - 1);
    }

    for(i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
```

<br>

### 21.  Write C program to right rotate an array.

> Array

    {1, 2, 3, 4, 5}

> Test Data

    Enter the value of k: 2
    
> Expected Output

    4 5 1 2 3    

> Source Code

```c
#include <stdio.h>

void reverse(int arr[], int i, int j){
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, k;

    printf("Enter the value of k: ");
    scanf("%d", &k);
    k = k % n;
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);    
    reverse(arr, 0, n - 1);         
    printArray(arr, n);

    return 0;
}
```

<br>

### 22. Write C program to left rotate an array.

> Array

    {1, 2, 3, 4, 5}
    
> Test Data

    Enter the value of k: 2
    
> Expected Output

    3 4 5 1 2

> Source Code

```c
#include <stdio.h>

void reverse(int arr[], int i, int j){
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, k;

    printf("Enter the value of k: ");
    scanf("%d", &k);
    k = k % n;
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);    
    reverse(arr, 0, n - 1);         
    printArray(arr, n);

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

