#include <stdio.h>

int main(void){

	float width,length,perimeter;

	printf("Enter perimeter:");
	scanf("%f",&perimeter);

	length=(perimeter*2.0)/7.0;
	width=(perimeter*3.0)/14.0;

	printf("width:%f",width);
	printf("lenght:%f",length);
}
