//Sum=x+3x+5x+7x+........+n terms
#include <stdio.h>
int main(){
	int n,x,i,pro=0,sum;
	printf("Enter the value of n and x: ");
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=1;i<n+1;i++){
		if(i%2!=0){
			pro=pro+i;
		}
		else{
			continue;
		}
	}
	sum=x*pro;
	printf("%d",sum);
}

