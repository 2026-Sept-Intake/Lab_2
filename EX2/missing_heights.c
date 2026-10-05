#include <stdio.h>

int main (void)
{
	int  h1,h2,h3,mh,avg;

	printf("Enter first height: ");
	scanf("%d",&h1);  //get the first height
	printf("\nEnter second height: ");
	scanf("%d",&h2); //get the second height
	printf("\nEnter third height: ");
	scanf("%d",&h3);  //get the third  height
	printf("\nEnter the average: ");
	scanf("%d",&avg);  //get the calculated average

	mh = ((avg*5)-(h1+h2+h3))/2;  // calculate the missing heights that are the same
	printf("\nMissing heights are %d and %d\n",mh,mh);
}
