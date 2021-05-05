#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	int i=0;
	char name[40],chr;
	printf("Enter Name: ");
	scanf("%s",&name);
	while(i<name[i]){
		char n = name[i];
		n = toupper(n);
		printf("%c",n);
		i++;
	}
	getch();
}
