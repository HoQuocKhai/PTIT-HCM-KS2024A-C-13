#include<stdio.h>
#define max 100
#include<stdbool.h>

int arr[max][max];

int inputArr(int a,int b);
void printArr(int a,int b);
void printCornerArr(int a,int b);
void printBorderArr(int a,int b);
void printDiagonalArr(int a, int b);
void printPrimeArr(int a,int b);

int main(){
	int m,n;
	printf("nhap vao so hang cua mang: ");
	scanf("%d",&m);
	printf("nhap vao so cot cua mang: ");
	scanf("%d",&n);
	int choice;
	do{
		printf("=================================MENU==================================\n");
		printf("1. Nhap vao gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7. thoat\n");
		
		printf("nhap vao lua chon: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				inputArr(m,n);
				break;
				
			case 2:
				printArr(m,n);
				break;
				
			case 3:
				printCornerArr(m,n);
				break;
				
			case 4:
				printBorderArr(m,n);
				break;
			
			case 5:	
				printDiagonalArr(m,n);
				break;
			
			case 6:
				printPrimeArr(m,n);
				break;
			
			case 7:
				return 0;
										
			default:
				printf("cuu phap KHONG HOP LE\n");
		}
	}while(choice!=7);
	
}

int inputArr(int a,int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			printf("nhap phan tu index[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
}

void printArr(int a,int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void printCornerArr(int a,int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if((i==a-1||i==0)&&(j==b-1||j==0)){
				printf("%d ",arr[i][j]);
			}
			printf("  ");
		}
		printf("\n");
	}
}

void printBorderArr(int a,int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if(i==0||j==0||i==a-1||j==b-1){
				printf("%d ",arr[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}


void printDiagonalArr(int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			if(i==j||j==b-1-i){
				printf("%d ",arr[i][j]);
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrimeArr( int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}
