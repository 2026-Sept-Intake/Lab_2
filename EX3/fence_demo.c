#include<stdio.h>
int main (void)
{
	int p;
	printf("Enter the fence perimeter : ");
	scanf("%d",&p);
	int width, length;
	length = p*2/7;
	width = p*3/14;
	

	printf("The Witdh of fence :%d \n",width);
	printf("The Length of fence :%d \n",length);

}
