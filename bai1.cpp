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
		scanf("%d", &tempSoluong);
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

void timSoLanXuatHien(int arr[], int soluong, int soLanCanTim){
	int danhDauIndex[soluong];
	int index = 0;
	while(index < soluong){
		danhDauIndex[index] = 0;
		index ++; 
	}
	
	int coTimThay = 0;
	int idx = 0;
	
	while(idx < soluong){
		if(danhDauIndex[idx] == 1){
			idx ++;
			continue;
		}
		
		int bienDem = 1;
		int j = idx + 1;
		
		while(j < soluong){
			if(arr[j] == arr[idx] ){
				bienDem ++;
				danhDauIndex[j] = 1;
			}
			j++;
		}
		
		if(bienDem == soLanCanTim){
			printf("%d \n", arr[idx]);
			coTimThay = 1;
		}
		
		idx ++;
	}
}


//bai 2
void hoanDoi(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort_InTungBuoc(int daySo[], int soLuong) {
    int i = 0;
    while (i < soLuong - 1) {
        int j = 0;
        while (j < soLuong - i - 1) {
            if (daySo[j] > daySo[j+1]) {
             
                hoanDoi(&daySo[j], &daySo[j+1] );
            }
            j++;
        }
        
        // In ra trang thái dãy so sau moi buoc i
        printf("Buoc %d: ", i + 1);
        int k = 0;
        while (k < soLuong) {
            printf("%d ", daySo[k]);
            k++;
        }
        printf("\n");
        
        i++;
    }
}

main(){
	
	//bai 1
	int arr[MAX_SIZE];
	int soluong = 0;
	int solancantim = 0;
	//a
	nhap(arr, &soluong);
	inMang(arr, soluong);
	//b-c
	timSoLonNhatVaNhoNhat(arr, soluong);
	printf("\n");
	//d
	//	printf("\n");
	//	printf("Nhap so lan xuat hien can tim:");
	//	scanf("%d", &solancantim);
	//	timSoLanXuatHien(arr, soluong, solancantim);
	
	
	//bai 2
bubbleSort_InTungBuoc(arr, soluong);
}
