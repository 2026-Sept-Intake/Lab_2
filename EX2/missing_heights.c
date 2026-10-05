#include <stdio.h>

int main(void)
{
	float h1,h2,h3,average;
	float missing_total, missing_height;

	printf("Enter height of person 1: ");
	scanf("%f", &h1);

	printf("Enter height of person 2: ");
	scanf("%f", &h2);

	printf("Enter height of person 3: ");
	scanf("%f", &h3);

	printf("Enter calculated average height: ");
	scanf("%f", &average);

	missing_total = (average * 5) - (h1 + h2 + h3);
	missing_height = missing_total / 2;

	printf("Missing height of person 4: %.2f\n", missing_height);
	printf("Missing height of person 5: %.2f\n", missing_height);

	return 0;
}
