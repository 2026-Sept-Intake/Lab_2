#include<stdio.h>
int main(void){
	float p,length,width;
	printf("Enter the perimeter: ");
	scanf("%f", &p);
	length = p / 3.5;
	width = 0.75 * length;

	printf("length = %.2f\n" , length);
	printf("width = %.2f\n" , width);
	return 0;
}

