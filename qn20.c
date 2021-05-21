#include<stdio.h>
#include<conio.h>
void main(){
	int n,i=1,ans;
	printf("enter n :");
	scanf("%d",&n);
	printf("Squares\n");
	for(i=1;i<=n;i++){
		ans = i*i;
		printf("%d\t",ans);
	};
	printf("\nCubes\n");
	for(i=1;i<=n;i++){
		ans = i*i*i;
		printf("%d \t",ans);
	};
}
