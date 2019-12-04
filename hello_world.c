#include <stdio.h>

int add(int x, int y){
  int z=x+y;
  return z;
}

void main(){
  int sum;
  sum=add(1,2); 
  printf("sum : %d",sum);
}
