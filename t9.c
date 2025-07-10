#include <stdio.h>
void main(){
	int i=1,k=1,n;
	scanf("%d",&n);
	while(i<=n){
		while(k<=i){
		printf("* ");
		k++;
	    }
	printf("\n");
	i++;
	}
}

