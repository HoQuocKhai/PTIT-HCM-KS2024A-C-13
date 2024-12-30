#include<stdio.h>
#define max 100

int arr[max][max];
int inputArr(int a,int b);
void outputMatrix(int a,int b);

int main(){
	int m,n;
	printf("nhap vao so hang trong mang: ");
	scanf("%d",&m);
	printf("nhap vao so cot trong mang: ");
	scanf("%d",&n);
	
	inputArr(m,n);
	outputMatrix(m,n);
	
	return 0;
}
int inputArr(int a,int b){
	for (int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			printf("nhap vao phan tu index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void outputMatrix(int a,int b){
	for (int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
