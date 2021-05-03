#include<stdio.h>
#include<conio.h>
int main(){
	float cel,far;
	printf("Enter the Temperature(celcius): ");
	scanf("%f",&cel);
	far = (cel*9/5)+32;
	printf("The temperature in fahrenheit is %f ",far);
	return 0;
	getch();
}
