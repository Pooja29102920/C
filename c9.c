#include <stdio.h>
void main(){
	int n,i,first_max,sec_max;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	first_max=arr[0];
	sec_max=arr[0];
	for(i=1;i<=n-1;i++){
		if(arr[i]>first_max){
			first_max=arr[i];
		}
	}
	for(i=1;i<=n-1;i++){
		if(arr[i]>sec_max && arr[i]!=first_max){// here we can also take arr[i]<first_max 
			sec_max=arr[i];
		}
	}
	printf("the second maximum number in the array is: %d",sec_max);
}

