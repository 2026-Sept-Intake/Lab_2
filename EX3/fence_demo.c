#include<stdio.h>
int main(void)
{
	int p;
	float l,w;
	printf("enter the perimeter;");
	scanf("%d",&p);
        l=(p/2.0)*(4.0/7.0);
        w=(l)*(3.0/4.0);
	printf("length is %f and width is %f",l,w);

	return 0;
}
