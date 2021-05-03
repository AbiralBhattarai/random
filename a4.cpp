#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
float fc;
float fp;
float sp;
int main(){
	float p;
	printf("enter  price of pen in paisa ; ");
	scanf("%f",&p);
		if(p >= 100){
			fp = p / 100;
			fc = fp;
			printf("%f",fc);
		}else{
			fc = p / 100 ;
			printf("%f",fc);
		};
	return 0;
	getch();
}
