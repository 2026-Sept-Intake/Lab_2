#include <stdio.h>
int main(void)
{
	int h1,h2,h3;
	float avg;
	printf("Enter height 1 : \n");
	scanf("%d",&h1);
	printf("Enter height 2 : \n");
        scanf("%d",&h2);
	printf("Enter height 3 :\n ");
        scanf("%d",&h3);
	printf("Enter the average of heights : ");
	scanf("%f",&avg);

	int sum = avg*5;
	int m_h = (sum-(h1+h2+h3))/2;
	printf("The missing Height is : %d\n",m_h);

}
