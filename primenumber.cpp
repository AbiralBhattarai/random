#include<stdio.h>
#include<conio.h>

int main(){
	int n,i,c;
	c = 0;
	printf("enter a number: ");
	scanf("%d",&n);
	i = 1;
	for(i;i<=n;i++){
			if (n%i == 0){
				c=c+1;
			};
	};
	if(c == 2){
		printf("Number is prime");
	}else{
		printf("number is composite");
	};
	getch();
	return 0;
}
