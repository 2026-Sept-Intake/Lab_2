#include<stdio.h>
int main(void){
	float h1,h2,h3,avg,missing;
	printf("Enter the three heights: ");
	scanf("%f %f %f", &h1, &h2, &h3);
	printf("Enter the averge height: ");
	scanf("%f", &avg);
        
	missing = (5*avg - (h1+h2+h3))/2;
	printf("Each missing height is: %.2f\n", missing);
	return 0;
}
