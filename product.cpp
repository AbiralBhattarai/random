#include<stdio.h>
#include<conio.h>
#include<math.h>
int a,b;
int prod(int num1,int num2);
int main(){
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%d",&b);
	int product = prod(a,b);
	printf("Their product is %d ",product);
	return 0;
	getch();	
}


int prod(int num1,int num2){
	int ans = num1 * num2;
	return ans;
}
