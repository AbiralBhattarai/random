#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int n[10];
	for(int i = 0;i < 10;i++){
		printf("enter a number:");
		scanf("%d",&a);
		n[i]=a;
	}
	for(int j=9;j>=0;j--){
		printf("%d \n",n[j]);
	}
}
