#include <stdio.h>
int main(void){
  float avg = 0;
  float h1 = 0;
  float h2 = 0;
  float h3 = 0;
  float lost = 0;

 
  printf("Enter the average value of the heights: ");
  scanf("%f",&avg);

  printf("Enter the height1 in cm: ");
  scanf("%f",&h1);

  printf("Enter the height2 in cm: ");
  scanf("%f", &h2);

  printf("Enter the height3 in cm: ");
  scanf("%f", &h3);

  lost = ((avg*5)-(h1+h2+h3))/2;

  printf("The lost height is : %.2f ",lost);
  return 0;



}
