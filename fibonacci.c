#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,n,i=0;
	a = 0;
	b = 1;
	c = 0;
	printf("How many fibonacci terms do you want??");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d \t",a);
		c = a+b;
		a = b;
		b = c;
	};
	
}
