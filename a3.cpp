#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
	float s1,s2,s3,s4,s5;
	printf("enter marks in Computer\n Physics\n AppliedMechanics\n Maths \n and \n Drawing; ");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	float sum = s1 + s2 +s3 + s4 + s5;
	float avg= sum/500;
	float percent = avg * 100;
	printf("You obtained %f percent \n and \n Your total marks was %f",percent,sum);
	return 0;
	getch();
}
