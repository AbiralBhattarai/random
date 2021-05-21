#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main(){
	float bal,bon,new_bal;
	char g;
	printf("Enter current balance: \n");
	scanf("%f",&bal);
	printf("enter Gender(M/F)\n");
	fflush(stdin);
	g = getchar();
	g = tolower(g);
	new_bal = 0.02*bal + bal;
	if(g == 'f'){
		if(bal >= 5000){
			new_bal = new_bal + .05*new_bal;
		}
	}
	printf("New balance = Rs.%.2f",new_bal);
}
