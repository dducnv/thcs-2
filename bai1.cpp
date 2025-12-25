#include <stdio.h>

void wrap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void inMang(int arr[], int n){
	for(int i = 0; i < n; i ++){
		printf("%d ", arr[i]);		
	}
	printf("\n");
	
}


void sxNoiBot(int arr[], int n){
	for(int i = 0; i < n-1; i ++){
		printf("Buoc %d: ", i + 1);
		for(int j = 0; j < n - i +1; j ++){
			if(arr[j] < arr[j + 1] ){
				wrap(&arr[j], & arr[j +1]);
			}
		}
		inMang(arr, 5);
	} 
}

void selectionSort(int arr[],int n){
	for(int i = 0; i < n; i ++){
			printf("Buoc %d: ", i + 1);
		for( int j = 0; j < n-1; j ++){
			if(arr[i] < arr[j]){
				wrap(&arr[i], &arr[j]);
			}
		}
			inMang(arr, 5);
	}
}

main(){
	int arr[5] = {1, 2, 4, 6, 5};
	inMang(arr, 5);
	selectionSort(arr, 5);
	

}
