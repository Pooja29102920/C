//Given a set of 100 values representing marks of students, count the total students that have passed. (A score of 40 is required for passing.) 
#include <stdio.h>
int main(){
	int count=0,marks;
	int n=1;
	while(n<=5){
		printf("Enter the marks of the student: ");
		scanf("%d",&marks);
		if(marks>=40){
			count=count+1;
		}
		n=n+1;
	}
	printf("%d",count);
	return 0;
}
