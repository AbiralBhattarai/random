#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int num,first_digit,last_digit;
	printf("enter a 4 digit number");
	scanf("%d",&num);
	first_digit = num/1000;
	last_digit = num%10;
	int sum = first_digit + last_digit;
	printf("Sum= %d",sum);
	getch();
	return 0;
}
