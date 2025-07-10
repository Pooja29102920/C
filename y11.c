#include <stdio.h>
int main(){
	int i,n,fact=1;
	scanf("%d",&n);
	if (n==0 || n==1){
		printf("Factorial: 1")
	}
	if(n<0){
		printf("Can't find factorial");
	}
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}

