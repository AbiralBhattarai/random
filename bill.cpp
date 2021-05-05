#include<stdio.h>
#include<conio.h>
float cost = 0;
float i=1;
int main(){
	float units;
	printf("Enter Units of Electricity Consumed Per Month: ");
	scanf("%f",&units);
	float ch = units;
	for(i;i<=ch;i++){
		if(i<=20){
			cost = 80;
		}else if((i>20)&&(i<=120)){
			cost = cost + 7.30;
		}else{
			cost = cost + 9;
		}
	}
	printf("%f",cost);
}
