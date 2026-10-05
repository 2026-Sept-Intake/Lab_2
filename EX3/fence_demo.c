#include <stdio.h>

int main (void)

{
	float perimeter,width,length;

	printf("Enter the fence's perimeter: ");
	scanf("%f",&perimeter);  //collect the perimeter
	
	length = (2*perimeter)/7;    //calculate the width
        width = (3*perimeter)/14;   //calculate the length

	printf("\nFence's width is %.2f and the length is %.2f\n",width,length);
}

