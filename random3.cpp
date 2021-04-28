#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 3rd number:");
	scanf("%d",&b);
	printf("enter 2nd number:");
	scanf("%d",&c);
	if (a>b && a>c){
		printf("%d is greatest",a);
	}else if(b>c && b>a){
		printf("%d is greatest",b);
	}else{
		printf("%d is greatest",c);
	}
	return 0;
}
