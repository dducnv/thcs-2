#include <stdio.h>
#define MAX_SIZE 100
//bai 1
//a



void nhap(int arr[], int *soluong){
	int tempSoluong;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &tempSoluong);
	
	while(tempSoluong <= 0 || tempSoluong > MAX_SIZE){
		printf("So luong phai > 0 va < %d, Nhap lai: ", MAX_SIZE);
		scanf("%d", &soluong);
	}
	
	*soluong = tempSoluong;
	
	int chiso = 0;
	printf("Nhap so phan tu: ");
	while(chiso < tempSoluong){
		scanf("%d", &arr[chiso]);
		chiso ++;
	}
}

void inMang(int arr[], int n){
	int chiso = 0;
	while(chiso < n){
		printf("%d ", arr[chiso]);
		chiso ++;
	}
	
}

void timSoLonNhatVaNhoNhat(int arr[], int n){
	int soLonNhat = arr[0];
	int soNhoNhat = arr[0];
	int viTriLonNha = 0;
	int viTriNhoNhat = 0;
	int chiso = 0;
	while(chiso < n){
		if(soLonNhat < arr[chiso]) {
			soLonNhat = arr[chiso];
			viTriLonNha = chiso;
		}
		if(soNhoNhat > arr[chiso]){
			soNhoNhat = arr[chiso];
			viTriNhoNhat = chiso;
		}
		chiso ++;
	}
	printf("\n");
	printf("Max: %d ", soLonNhat);
	printf("Vi tri Max: %d", viTriLonNha);
	printf("\n");
	printf("Min: %d ", soNhoNhat);
	printf("Vi tri Min: %d", viTriNhoNhat);

}

main(){
	int arr[MAX_SIZE];
	int soluong = 0;
	int solancantim = 0;
	nhap(arr, &soluong);
	inMang(arr, soluong);
	timSoLonNhatVaNhoNhat(arr, soluong);
}
