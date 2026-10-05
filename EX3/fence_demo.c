#include<stdio.h>
int main(void)
{ 
	int perimeter;
	float length,width; //length means rectangle length,width means rectanglewidth
	{
		printf("Enter the perimeter");
		scanf("%d",&perimeter);
		length=2*perimeter/7.0;
		width=(3/4.0)*length;
		printf("length is %f and width is %f",length,width);
		return 0;
	}
}

         
