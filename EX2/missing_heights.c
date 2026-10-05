#include<stdio.h>
int main()
{ 
	float AVG,H1,H2,H3,MH;
	printf("Enter the known H1:");
	scanf("%f", &H1);
	printf("Enter the known H2:");
        scanf("%f", &H2);
        printf("Enter the known H3:");
        scanf("%f", &H3);
	printf("Enter the average you calculated:");
	scanf("%f", &AVG);
	MH =(5*AVG-(H1+H2+H3))/2;
	printf(" The Missing heights is %f\n", MH);
	return 0;
}	

