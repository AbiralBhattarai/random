#include<stdio.h>
#include<conio.h>
#include<math.h>
int square(int number, int power);
int cube(int number, int power);
int main(){
	int num,choice;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("you wanna: \n 1)square 2)cube it?? ");
	scanf("%d",&choice);
	if(choice ==  1){
		int result = square(num,2);
		printf("answer is %d ",result);
	}else if(choice == 2){
		int result = cube(num , 3);
		printf("answer is %d ",result);
	}else{
		printf("Wrong Input(enter 1 for squaring and 2 for cubing)");
	}
	getch();
	return 0;
}
int square(int number, int power){
	int answer = pow(number,power);
	return answer;
}

int cube(int number,int power){
	int answer = pow(number,power);
	return answer;
}
