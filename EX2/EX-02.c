#include <stdio.h>
int main(void)
{
	float h1,h2,h3,mh1,mh2,mh3,avg;

	printf("Enter 1st height:\n");
	scanf("%f",&h1);

	printf("Enter 2nd height:\n");
	scanf("%f",&h2);

	printf("Enter 3rd height:\n");
	scanf("%f",&h3);

	printf("Enter average:");
	scanf("%f",&avg);

	mh3 = 5.0*avg -(h1+h2+h3);
	mh1 = mh3/2.0;
	mh2 = mh3/2.0;

	printf("1st missing height is = %f and 2nd missing height = %f",mh1,mh2);
	
	return 0;
}
