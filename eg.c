//CH.SC.U4CSE24022
#include <stdio.h>
int main(){
	char ch;
	printf("Enter three numbers (a b c): ");
	scanf("%d %d %d", &a, &b, &c);
	if((a>b && a<c) || (a>c && a<b)){
		printf("%d is between %d and %d.\n", a, b, c);
	}
	else{
		printf("%d is not between %d and %d.\n", a, b, c);
	}
	return 0;
}

