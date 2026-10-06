#include <stdio.h>

int main(void){

	float h1,h2,h3,avg,mh;

	printf("Enter h1:");
	scanf("%f",&h1);

	printf("Enter h2:");
	scanf("%f",&h2);

	printf("Enter h3:");
	scanf("%f",&h3);

	printf("Enter avg:");
	scanf("%f",&avg);

	mh=(avg*5-(h1+h2+h3))/2;

	printf("missing height value is %f",mh);
}
