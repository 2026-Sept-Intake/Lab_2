#include<stdio.h>

int main(void)
{
	int h1,h2,h3;
	float avg;

	printf("Enter height1 : ");
	scanf("%d",&h1);

	printf("Enter height2 : ");
        scanf("%d",&h2);

	printf("Enter height3 : ");
        scanf("%d",&h3);

	printf("Enter Average : ");
        scanf("%f",&avg);

	int height3=avg*5;
	int mh=(height3-(h1+h2+h3))/2;
	printf("Missing height is : %d\n", mh);

	
}
