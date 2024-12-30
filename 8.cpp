#include<stdio.h>

int maxValu(int a,int b);

int main(){
	int n,m;
	printf("nhap vao so n: ");
	scanf("%d",&n);
	printf("nhap vao so m: ");
	scanf("%d",&m);	
	
	printf("UCLN: %d",maxValu(n,m));
	
	return 0;
}
int maxValu(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else b=b-a;
	}
	return a;
}
