#include <stdio.h>

int main(){
	int arr[100];
	int length, i, j, temp;
	
	printf("Enter length of the array: ");
	scanf("%d", &length);

	printf("Enter %d elements: ", length);
	for(i = 0; i < length; i++){
		scanf("%d", &arr[i]);
	}


	for(i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}