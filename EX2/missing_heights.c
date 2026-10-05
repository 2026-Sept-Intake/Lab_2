#include<stdio.h>
int main (void)
       {
	int h1,h2,h3,mh; //h1,h2,h3 represents heights of known ppl, mh represents missing height
	float avg;
	{
	 printf("input the heights of the 3 known ppl\n");
	 scanf("%d %d %d",&h1,&h2,&h3);
	 printf("input the average\n");
	 scanf("%f",&avg);
	 mh=((avg*5)-(h1+h2+h3))/2;
	 printf("missing height 1 is %d\nmissing height 2 is %d\n",mh,mh);
	}
	return 0;
       }
	
