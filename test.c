#include <stdio.h>

int main(){
    int arr[] = {20, 50, 90, 60, 70, 80, 30, 10};
    int max = 0, length;

    length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    printf("%d", max);
    return 0;
}