#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	float bal,bon,new_bal;
	char gender;
	printf("Enter balance: ");
	scanf("%f",&bal);
	printf("gender??(M/F)");
	fflush(stdin);
	gender = getchar();
	gender = tolower(gender);
	bon = .02*bal;
	new_bal = bal + bon;
	if(gender == 'f'){
		if(bal >= 5000){
		bon = .05 * bal;
		new_bal = new_bal + bon;	
		}
	}
	printf("New balance = ",new_bal);
}
