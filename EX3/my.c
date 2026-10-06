#include <stdio.h>

int main(void){

	float w,l,p;

	printf("Enter p");
	scanf("%f",&p);

	l=(2.0/7)*p;
	w=(p-2*l)/2;

	printf("length is, %f",l);
	printf("width is, %f",w);

}

