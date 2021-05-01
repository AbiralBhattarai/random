#include<stdio.h>
#include<conio.h>
int fact(int num);
int main(){
	int number1,number2;
	printf("Enter p in terms of permutatin");
	scanf("%d",&number1);
	printf("Enter r in terms of permutatin");
	scanf("%d",&number2);
	int fact_of_num1 = fact(number1);
	int r = number1-number2;
	int fact_of_num2 = fact(r);
	float ans = fact_of_num1/fact_of_num2;
	printf("%f", ans);
	return 0;
};
int fact(int num){
	int factorial = 1;
	for(int i = 1; i <= num;i++){
		factorial = factorial * i;
	};
	return factorial;
}
