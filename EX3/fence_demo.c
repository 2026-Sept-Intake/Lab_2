#include <stdio.h>
int main(void)
{
	float P,L,W;

	printf("enter the perimeter: ");
	scanf("%f",&P);

	L=P/3.5;
	W=0.75*L;

	printf("length=%.2f\n",L);
	printf("width=%.2f\n",W);
	return 0;
}
