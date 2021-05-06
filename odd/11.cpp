#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main(){
	int r;
	printf("enter the radius of the circle: ");
	scanf("%d",&r);
	float area = PI*r*r;
	printf("%f",area);
}
