//gcc -c test.c
//gcc -o test.exe test.o
#include <stdio.h>

void selection_sort(int a[], int len){
	
	for(int i=0; i<len-1 ; i++){
		int min = i;
		for(int j=i+1; j<len ; j++){
			if(a[j] < a[min])
				min = j;
		}
	
		if( min != i){
			int temp = a[min];
			a[min] = a[i];
			a[i]= temp;
		}
	}
}

int main(){
	int arr[]={9, 5, 10, 55, 44, 43, 89, 8, 20, 11 };
	int len = sizeof(arr)/sizeof(arr[0]);
	
	selection_sort(arr, len);
	
	for(int i =0; i<len; i++){
		printf("%d ", arr[i]);
	}
		
	return 0;
}