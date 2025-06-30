//CH.SC.U4CSE24022
#include <stdio.h>
int main(){
	int num,rem,rev_num=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev_num=rev_num*10+rem;
		num/=10;
	}
	printf("Reversed number: %d",rev_num);
	return 0;
}

