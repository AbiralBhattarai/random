#include<stdio.h>
#include<conio.h>
int main(){
	int sal;
	float net,ma,ha,pf,total;
	printf("enter basic salary amount in rupees");
	scanf("%d",&sal);
	int s = sal;
	ma = s*10/100;
	ha = s*8/100;
	pf = s*10/100;
	net = s-ma-ha-pf;
	printf("%f",net);
}
