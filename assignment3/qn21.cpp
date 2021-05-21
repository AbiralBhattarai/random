#include<stdio.h>
#include<conio.h>
void main(){
	int num,sum,i=1,j=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(i< = num){
		if(num % i == 0){
			if(i>0 && i!=num){
				sum = sum + i;	
			}
		}
	}
	if(sum == num){
		printf("It is a perfect number!!")
	}	
}
