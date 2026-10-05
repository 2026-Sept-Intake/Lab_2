#include<stdio.h>
int main (void)
{
	float avg;
	int h1,h2,h3;
	printf("enter the Height 1");
	scanf("%d",&h1);
	printf("enter the Height 2");
        scanf("%d",&h2);
	printf("enter the Height 3");
        scanf("%d",&h3);
	printf("enter the calculated avg");
        scanf("%f",&avg);
	int sum=h1+h2+h3;
	float mh=(avg*5-sum)/2;
	printf("missing height 1 is %.2f\n ",mh);
	printf("missing height 2 is %.2f\n ",mh);

	return 0;
}



