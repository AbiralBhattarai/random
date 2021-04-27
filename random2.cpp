#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c,i;
	a=1;
	b=1;
	for(i=1;i<=10;i++){
			printf("%d\n",a);
			c = a + b;
			a = b;
			b = c;		
	}
	getch();
	return 0;	
}
