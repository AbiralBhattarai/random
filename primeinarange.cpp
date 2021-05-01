#include<stdio.h>
#include<conio.h>
int c;
int main(){
	int a,b;
	printf("enter starting number for range; ");
	scanf("%d",&a);
	printf("enter ending number for range; ");
	scanf("%d",&b);
	for(a;a<=b;a++){
		int	num = a;
		for(int i=1;i<=num;i++){
			if(num % i == 0){
				c = c+1;
			}
		}
		if(c == 2){
			printf("%d",num);
		}
		
	}
	return 0;
}
