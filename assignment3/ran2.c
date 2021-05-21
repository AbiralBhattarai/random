#include<stdio.h>
#include<conio.h>
void main(){
	int a,c,i,j;
	printf("enter a number :");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		c = 0;
		if(a%i == 0){
			j = 1;
			for(j;j<=i;i++){
			if (i%j == 0){
				c=c+1;
			}
	}
	if(c == 2){
		printf("%d",j);
	}
	}
	getch();
}
}
