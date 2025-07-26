#include <stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(i==35){
			continue;
		}
		printf("%d\n",i);
	}
}

