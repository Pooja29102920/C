#include <stdio.h>
int main(){
	int i;
	int arr[6]={10,15,6,8,12};
	int max=arr[0];//a[0]=10=max
	for(i=1;i<=5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("The maximum element is %d\n", max);
	return 0;
}

