#include<stdio.h>
#include<conio.h>
void main(){
	int a,rem,rev=0;
	printf("enter a number");
	scanf("%d",&a);
	while(a>0){
		rem = a%10;
		rev = rev*10 + rem;
		a = a/10;
	}
	printf("%d",rev);
}
