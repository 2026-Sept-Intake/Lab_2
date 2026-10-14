#include<stdio.h>
int main(void)
{
	float l,w,p;

	printf("Enter the perimeter:");
	scanf("%f",&p);

	l = (2.0*p)/7.0;
	w = (3.0/4.0)*1;

	printf("Length is %f anf width is %f", l,w);

	return 0;
}
