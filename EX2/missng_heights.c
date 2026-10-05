#include <stdio.h>
int main ()
{ 
	float h1,h2,h3;
	float avg,total_sum, known_sum,missing_sum,each_missing_height;
	{
		printf("enter height of person1:");
		scanf("%f" , &h1);
		
		printf("enter height of person2: ");
		scanf("%f", &h2);
		 
		printf("enter height of person3:");
		scanf("%f" , &h3);
		 
		printf("enter the average height of all 5 people: ");
		scanf("%f", &avg);
		 
		total_sum = avg* 5.0;
		known_sum = h1+ h2 + h3 ;
		missing_sum = total_sum - known_sum ;
		 
		each_missing_height = missing_sum / 2.0;
		printf("\n the two missing heights are: %.2f and %.2f\n" , each_missing_height, each_missing_height);
		return 0;
	
	}
}
