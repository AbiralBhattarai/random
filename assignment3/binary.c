#include<stdio.h>
#include<conio.h>
void main(){
	int n,bin,rem,i=1;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0){
		rem = n%2;
		bin = bin+ rem * i;
		n = n/2;
		i = i*10;
	}
	printf("binary = %d",bin);
	
}
