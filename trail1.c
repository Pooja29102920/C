//CH.SC.U4CSE24022
//Finding perimeter and area of the ring
#include <stdio.h>
void main(){
	  float pi=3.142;
      float inner_r,outer_r;
      printf("Enter inner radius: ");
      scanf("%f",&inner_r);
      printf("Enter outer radius: ");
      scanf("%f",&outer_r);
      float perimeter = 2*pi*(inner_r+outer_r);
      float area = pi*((inner_r*inner_r)-(outer_r*outer_r));
      printf("Perimeter: %f\n",perimeter);
      printf("Area: %f\n",area);
}

