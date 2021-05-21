#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,op;
	float ans;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Enter the operator:");
	scanf("%c",&op);
	fflush(stdin);
	op = getchar();
	switch(op){
		case '+':
			ans = a + b;
			printf("%f",ans);
			break;
		case '-':
			ans = a - b;
			printf("%f",ans);
			break;
		case '*':
			ans = a * b;
			printf("%f",ans);
			break;
		case '/':
			ans = a / b;
			printf("%f",ans);
			break;
		case '%':
			ans = a %b;
			printf("%f",ans);
			break;
	}
	getch();
}
