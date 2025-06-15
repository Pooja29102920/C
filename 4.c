// Give a discount of 15 % when purchase amount exceeds 5000, otherwise give a discount of 10%
#include <stdio.h>
int main(){
	int discount;
	float amount;
	printf("Enter the amount: ");
	scanf("%f",&amount);
	if(amount>5000){
		discount=(15*amount)/100;
	}
	else{
		discount=(10*amount)/100;
	}
	amount=amount-discount;
	printf("%f",amount);
	return 0;
}
