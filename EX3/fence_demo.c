 #include <stdio.h>

  int main()
      {
         float perimeter, length,width;
	 printf("Enter thge perimeter of the rectangle fence:");
	 scanf("%f",&perimeter);

	 length = perimeter / 3.5;
	 width = 0.75 * length;

	 printf("Length =  %f\n",length);
	 printf("Width =  %f\n",width);

	 return 0;
     }   

