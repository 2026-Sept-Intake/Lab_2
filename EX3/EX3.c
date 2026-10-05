#include <stdio.h>
int main()

{
	    float Perimeter,length,width;
	    printf("Enter the perimeter\n");
        scanf("%f", &Perimeter);
        length=(2*Perimeter)/7.0f;
        width=(3*Perimeter)/14.0f;
        printf("The Length of the fence is, %.2f\n", length);
        printf("The Width of the fence is, %.2f\n", width);
      
        return 0;
}	
