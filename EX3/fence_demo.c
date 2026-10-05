#include<stdio.h>
int main(void)
{
	int w, l;
	float p;
	
	printf("Enter perimete of fence : ");
	scanf("%f",&p);
	
	l = p*2/7;
	w = p*3/14;
	
	printf("Length : %d\n",l);
	printf("Width : %d\n",w);
}
