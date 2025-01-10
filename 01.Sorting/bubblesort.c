//gcc -c test.c
//gcc -o test.exe test.o
#include <stdio.h>

void bubble_sort(int arr[], int len);

int main(){
	int arr[]={ 22, 34, 3, 32, 80, 55, 50, 37, 90, 2, 0, 11};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	bubble_sort(arr, len);
	
	for(int i =0; i< len; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}


void bubble_sort(int arr[], int len){
	for(int i=0; i< len-1; i++){
	    for(int j=0; j< len-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}