#include<stdio.h>
#include<conio.h>
void main(){
	int n,sum=0,i;
	printf("enter a number:");
	scanf("%d",&n);
	do{
		sum = sum + i;
	}while(sum<n);
	if(sum==n){
		printf("number is triangular");
	}else{
		printf("number is not triangular");
	}
	
}
