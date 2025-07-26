//CH.SC.U4CSE24022
#include <stdio.h>
int main(){
	int n,k,i,count=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to know it's count: ");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(arr[i]==k){
			count++;
		}
	}
	printf("%d occurs %d times",k,count);
	return 1;
}

