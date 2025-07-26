#include <stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==3){
			continue;
		}
		if(i==7){
			break;
		}
		printf("%d\n",i);
	}
}

