#include<stdio.h>

int greater(int a, int b){
  if ( a > b )
    return a;
  return b;
}

void main(){
  int x,y,z;
 
  printf("Please enter two numbers in format, Eg: 1,2,3\n");
  scanf("%d,%d,%d",&x,&y,&z);
  int greater_num=greater(greater(x,y),z);
  printf("the greater number is: %d",greater_num);

}
