#include <stdio.h>
int main(){
	int n;
	printf("Enter the value: ");
	scanf("%d",&n);
	int i=1;
	loop:
		{
			printf("%d\t",i);
			i++;
			if(i<=n){
				goto loop;
			}
		}
		return 0;
}

