#include<stdio.h>
#include<conio.h>
void main(){
	int sum=0,rem,a;
	printf("Enter a number");
	scanf("%d",&a);
	while(a /10 != 0 ){
		sum = 0;
		while(a!=0){
			rem = a % 10;
			sum = sum + rem;
			a = a/10;
		};
		a = sum;
	}
	printf("%d",sum);
	getch();
}
