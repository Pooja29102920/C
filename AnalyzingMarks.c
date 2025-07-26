//input: for 5 students- 3 subject marks
// topper
#include <stdio.h>
int main(){
	int marks[5][3];
	int i,j;
	float sum=0,highest=0;
	int topStudent=0;
	for(i=0;i<5;i++){
		printf("Enter the 3 subject marks of %d student: ",i+1);
		for(j=0;j<3;j++){
			scanf("%d",&marks[i][j]);
		}
	}
	int avg[5];
	for(i<0;i<5;i++){
		for(j=0;j<3;j++){
			sum+=marks[i][j];
		}
		avg[i]=sum/3.0;
		if(avg[i]>highest){
			highest=avg[i];
			topStudent=i+1;
		}
		sum=0;
	}
	for(i=0;i<5;i++){
		printf("%f\n",avg[i]);
	}
	printf("Highest mark: %f\n",highest);
	printf("Top student: Student %d ",topStudent);
}

