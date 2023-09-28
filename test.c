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