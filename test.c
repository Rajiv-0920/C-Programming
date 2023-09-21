#include <stdio.h>

int secondLargest(int [], int);

int main(){
    int arr[] = {20, 50, 90, 60, 70, 80, 30, 10};
    int secLargest;

    secLargest = secondLargest(arr, sizeof(arr) / sizeof(arr[0]));

    printf("Second Largest Element = %d", secLargest);

    return 0;
}

int secondLargest(int arr[], int length){
    int max = 0, secLargest;

    for(int i = 0; i < length; i++){
        if(max < arr[i]){
            secLargest = max;
            max = arr[i];
        }
        if(secLargest < arr[i] && max > arr[i]){
            secLargest = arr[i];
        }
    }
    return secLargest;
}