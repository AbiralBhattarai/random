#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main(){
	int a,b,c,d,e,sum;
	printf("enter 5 numbers");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum = a + b + c + d + e;
	float avg = (a+b+c+d+e)/5;
	printf("sum = %d and avg = %f ",sum,avg);
	return 0;
}
