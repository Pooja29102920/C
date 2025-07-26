#include <stdio.h>
int main(){
	char A;
	printf("Enter the Character: ");
	scanf("%c",&A);
	int ascii=A;
	if(ascii<=90){
		A= ascii+32;
	}
	printf("%c",A);
}

