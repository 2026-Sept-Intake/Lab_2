#include <stdio.h>
int main()
{
	float perimeter,length,width;
	printf("Enter the perimeter: ");
	scanf("%f" ,&perimeter);
	length = (2* perimeter) /7;
	width =(3*length) /4;
	printf("length = %.2f\n", length);
	printf("width = %.2f\n" ,width);
	return 0;
}
