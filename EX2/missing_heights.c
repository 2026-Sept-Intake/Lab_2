#include<stdio.h>
int main(void)
{ 
	float avg;
	int h1,h2,h3;
	printf("Enter the height 1: ");
	scanf("%d",&h1);
	printf("Enter the height 2: ");
        scanf("%d",&h2);
	printf("Enter the height 3: ");
        scanf("%d",&h3);
	printf("Enter the calculated Average: ");
        scanf("%f",&avg);
	int sum=h1+h2+h3;
	float mh=(avg*5-sum)/2;
        printf("Missing height 1 is %f\n ",mh);
        printf("Missing height 2 is %f\n ",mh);


        return 0;
        










}
