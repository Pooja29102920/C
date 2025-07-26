#include <stdio.h>
int main(){
	int i;
	float number,sum=0.0;
	for(i=1;i<=5;++i){
		printf("Enter a number :");
		scanf("%1f",&number);
		if(number<0.0){
			continue;
		}
		sum+=number;
		printf("sum=%.2f",sum);
	}
	return 0;
}

