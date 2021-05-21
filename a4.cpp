#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
float fc;
float sp;
int main(){
	int p;
	printf("enter  price of pen in paisa ; ");
	scanf("%d",&p);
	int fr = p / 100;
	int fp = p % 100;
	if(fr > 0){
		printf("cost of pen is %d rupees and %d paisa. ",fr,fp);
	}else{
		printf("cost of pen is %d paisa",fp);
	}
	return 0;
	getch();
}
