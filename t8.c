//nested for loop
//left handed traingle of stars
#include <stdio.h>
void main(){
	int i,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
		printf("* ");
	    }
	printf("\n");
	}
}

