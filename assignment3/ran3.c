#include<stdio.h>
#include<conio.h>
void main(){
	int n1,n2,i=1,j=1,c,rem_i,rem_j;
	printf("enter a number: ");
	scanf("%d",&n1);
	while(i<=n1){
		c = 0;
		rem_i = n1%i;
		if(rem_i == 0){
			n2 = i;
			j = 1;
			while(j<=n2){
				rem_j = n2 % j;
				if(rem_j == 0){
					c=c+1;
				} 
				j++;
			}
			if(c == 2){
				printf("%d\t",i);
			}
		}
		i++;
	}
	getch();
}
