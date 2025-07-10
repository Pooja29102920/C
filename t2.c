#include <stdio.h>
int main(){
	int a,b,c;
	for(a=0,b=0,c=0;a<2;a++){
		printf("%d\n",a+b+c);
		b+=2;
		c+=3;
	}
	return 0;
}

