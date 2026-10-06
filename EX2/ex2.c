#include <stdio.h>
int main(void)
{
	float h1,h2,h3,hx,H1,H2;

	printf("enter the 3 known heights: ");
	scanf("%f %f %f",&h1,&h2,&h3);

	printf("enter the all 5 heights average: ");
	scanf("%f",&H1);

	H2=h1+h2+h3/3;
	hx=5*H1-3*H2/2;

	printf("missing each height=%.2f\n",hx);
	return 0;
}
