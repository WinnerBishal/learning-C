#include <stdio.h>
 float area(float H,float B){
   
   float Area=H*B;
   return Area;
}

 void main(){
  float B=8;
  float H=10.5;
  float Area;

  area(10.5,8);

  printf("Given,B=%f\n",B);
  printf("Given,H=%f\n",H);
  printf("Then the area of the triangle is%f",Area);

  }


