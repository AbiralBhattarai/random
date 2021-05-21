#include<stdio.h>
#include<conio.h>
void main(){
	int num,sum=0,i=1,original;
	printf("enter a number:");
	scanf("%d",&num);
	original = num;
	while(i <= num){
			if(i>0 && i!=num){
				if(num % i == 0){
					sum = sum + i;	
			}
		}
		i = i + 1 ;
	}
	if(sum == original){
		printf("It is a perfect number!!");
	}else{
		printf("It is not a perfect number!!");
	}
}
