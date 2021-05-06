#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a,b,c,s,area;
	printf("Enter Length of side a: ");
	scanf("%f",&a);
	printf("Enter Length of side b: ");
	scanf("%f",&b);
	printf("Enter Length of side c: ");
	scanf("%f",&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f",area);	
}
