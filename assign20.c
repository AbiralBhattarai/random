#include<stdio.h>
#include<conio.h>
void main(){
	int n,i=1,ans;
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ans = i*i;
		pritnf("%d",ans);
	}
	for(i=1;i<=n;i++){
		ans = i*i*i;
		pritnf("%d",ans);
	}
}
