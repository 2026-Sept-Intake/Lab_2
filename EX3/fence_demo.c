#include<stdio.h>
int main (void)
{
	 int p; //p is perimeter
         float w,l; //w & l are width and length respectively
	 {
		 printf("input perimeter\n");
		 scanf("%d",&p);
		 l=(2/7.0)*p; //(p=2w+2l but 2w=2(3/4l)) so p=(7/2)l
	         w=(3/4.0)*l;
		 printf("width is %f\nlength is %f\n",w,l);
	 }
	 return 0;
}
