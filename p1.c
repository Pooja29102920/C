#include <stdio.h>
int main(){
	int m,n,i,j;
	printf("Enter the size of an array: ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("arr[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}

