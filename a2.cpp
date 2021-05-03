#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
	int n1,n2,n3,n4,n5;
	printf("enter 5 numbers; ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	float avg = (n1 + n2 + n3 + n4 +n5)/5;
	int sum = n1 + n2 +n3 + n4 + n5;
	printf("the sum is %d and the average is %f",sum,avg);
	return 0;
	getch();
}
