#include<stdio.h>
#include<conio.h>
void main(){
	int a,c=0;
	printf("enter a number ");
	scanf("%d",&a);
	while(a>0){
		a = a / 10;
		c = c + 1;
	}
	printf("number of digits = %d",c);
}
