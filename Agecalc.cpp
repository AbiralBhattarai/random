#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
	int birth_year,current_year,age;
	printf("Enter Your Birth Year: ");
	scanf("%d",&birth_year);
	current_year =2021;
	age = current_year - birth_year;
	printf("your age is %d",age);
}
