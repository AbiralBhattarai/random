#include<stdio.h>
#include<conio.h>
int main(){
	int a,fact;
	printf("enter a number : ");
	scanf("%d",&a);
	fact = 1;
	for(int i = 1;i<=a;i++){
		fact = fact*i;
	}
	printf("Factorial = %d ",fact);
	return 0;
	getch();
}
