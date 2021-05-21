#include<stdio.h>
#include<conio.h>
void main(){
	int sum = 0,num,c=0;
	float avg;
	do{
		printf("Enter a number");
		scanf("%d",&num);
		sum = sum + num;
		c = c + 1;	
	}while(num > 0);
	sum = sum - num ;
	avg = (float)(sum)/(float)(c-1);
	printf("Sum of entered digits is %d and avg is %.2f",sum,avg);
	getch();
}
