#include<stdio.h>
#include<conio.h>
void main(){
	int num,rem,sum=0,i	,fact=1,original;
	printf("enter a number");
	scanf("%d",&num);
	original = num;
	while(num != 0){
		fact = 1;
		rem = num % 10;
		for(i=1;i<=rem;i++){
			fact = fact * i;
		}
		sum = sum + fact;
		num = num / 10;
	}
	if(original == sum){
		printf("It is a strong number!!");
	}else{
		printf("It is not a strong number!!");
	}
}
