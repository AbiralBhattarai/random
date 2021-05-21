#include<stdio.h>
#include<conio.h>
int c;
int main(){
	int a,b,num,i;
	printf("enter starting number for range; ");
	scanf("%d",&a);
	printf("enter ending number for range; ");
	scanf("%d",&b);
	for(a;a<=b;a++){
		c = 0;
		num = a;
		for(i=1;i<=num;i++){
			if(num % i == 0){
				c = c+1;
			}
		}
		if(c == 2){
			printf("%d \t",a);
		}
		
	}
	return 0;
}
