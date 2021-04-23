#include<stdio.h>
#include<conio.h>

int main(){
	int a;
	printf("Enter Your age: ");
	scanf("%d",&a);
	if(a<21){
		printf("You aren't eligible to drink yet buddy!'");
	} else{
		printf("Congrats!! Here Take a Beer!");
	}
	return 0;
	getch();
}
