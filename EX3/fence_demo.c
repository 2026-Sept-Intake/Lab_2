#include <stdio.h>
int main(void){
  float perimeter = 0;
  float width = 0;
  float length = 0;

  printf("Enter the perimeter in cm: ");
  scanf("%f",&perimeter);

  length = (2*perimeter)/7;
  width = (3*perimeter)/14;

  printf("The length is %.2f \n",length);
  printf("The Width is %.2f \n", width);

  return 0 ;


}
