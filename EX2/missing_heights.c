 #include <stdio.h>
  
  int main()
     { 
	 int h1,h2,h3;
	 float avg,sum_missing,total_known,sum_known;

	 printf("Enter the height of the 1st person:");
	 scanf("%d",&h1);

	 printf("Enter the height of the 2nd person:");
         scanf("%d",&h2);

	 printf("Enter the height of the 3rd person:");
         scanf("%d",&h3);
         
	 printf("Enter the average height:");
	 scanf("%f",&avg);
            
	 total_known= avg*5;
	 sum_known=h1+h2+h3;	  
         sum_missing=(total_known - sum_known)/2;
	 printf("Missing heights: %f",sum_missing);
	 
	 return 0;

     }	 
