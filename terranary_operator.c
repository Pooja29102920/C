#include <stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("%d\n", age);
	(age<=18)? printf("cannot vote"): printf("can vote");
}

