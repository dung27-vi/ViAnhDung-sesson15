#include <stdio.h>
#define MAX 100
int inputTotalElement();
void inputArray(int arr[], int n);
void displayArray(int arr[], int n);
void removeDublicateElement(int arr[], int n);

int main(){
	int n, array[MAX];
	n = inputTotalElement();
	inputArray(array,n);
	displayArray(array,n);
	removeDublicateElement(array,n);
	
}

int inputTotalElement(){
	int n;
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1 || n>MAX){
			printf("Nhap lai n\n");
		}
	}while(n<1 || n>MAX);
	return n;
}
void inputArray(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu a[%d]=",i);
		scanf("%d",&arr[i]);
	}
}

void displayArray(int arr[], int n){
	printf("\nCac phan tu cua mang: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void removeDublicateElement(int arr[], int n){
	int i = 0, j;
	while(i<n){
		j = i+1;
		while(j<n){
			if(arr[j]==arr[i]){
				for(int k=j;k<n-1;k++){
					arr[k] = arr[k+1];
				}
				n--;
			}else{
				j++;
			}
		}
		i++;		
	}
	printf("\nMang co cac phan tu khong trung lap: \n");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
