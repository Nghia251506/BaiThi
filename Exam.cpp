#include<stdio.h>

int main(){
	int size;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &size);
	int arr[size];
	for(int i = 0; i < size; i++){
		printf("Nhap vao phan tu so %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Mang vua nhap la: \n");
	for(int i = 0; i< size; i++){
		printf("Phan tu thu %d la: %d\n", i+1, arr[i]);
	}
	
	int min = arr[0];
	for(int i = 0; i < size; i++){
		if(arr[i] < min && arr[i] > -1){
			min = arr[i];
		}
	}
	
	printf("So nguyen duong nho nhat trong mang la: %d", min);
}
