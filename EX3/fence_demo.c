#include <stdio.h>

int main(void)
{
	float perimeter,length,width;

	printf("Enter the perimeter of the fence: ");
	scanf("%f", &perimeter);

	length = (2.0 / 7.0) * perimeter;
	width = (3.0 / 14.0) * perimeter;

	printf("Length = %.2f\n", length);
	printf("Width - %.2f\n", width);

	return 0;
}
