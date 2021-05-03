#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main(){
	int r;
	printf("Enter the radius of the circle: ");
	scanf("%d",&r);
	float area = PI*pow(r,2);
	printf("Area of the circle with radius %d is %f",r,area);
	return 0;
	getch();
}
