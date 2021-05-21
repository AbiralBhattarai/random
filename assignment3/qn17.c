#include<stdio.h>
#include<conio.h>
void main(){
	int a,sum=0,rem;
	printf("Enter a number");
	scanf("%d",&a);
	while(a!=0){
		rem = a % 10;
		sum = sum + rem;
		a = a/10;
	}
	printf("sum of digits = %d",sum);
	getch();
}
