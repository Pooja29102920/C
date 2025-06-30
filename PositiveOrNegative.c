#include <stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	if(n<0){
		printf("n is a negative number...");
	}
	else if(n>0){
		printf("n is a positive number...");
	}
	else{
		printf("n is neither negative nor positive...");
	}
}

