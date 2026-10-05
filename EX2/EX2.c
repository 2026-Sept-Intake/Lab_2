#include <stdio.h>
int main()

{
	float AVG,H1,H2,H3,missingheights;
	printf("Enter the calculated average of 5 people\n");
	scanf("%f", &AVG);
	printf("Enter the height 1\n");
	scanf("%f", &H1);
	printf("Enter the height 2\n");
	scanf("%f", &H2);
	printf("Enter the height 3\n");
	scanf("%f", &H3);
	missingheights=((AVG*5.0f)-(H1+H2+H3))/2;
	printf("The missing height of each person is, %.2f\n", missingheights);
	
	return 0;
}
