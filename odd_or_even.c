#include<stdio.h>

void main(){
  int x;
  printf("Please enter an integer to know if it is odd or even\n");
  scanf("%d",&x);
  printf("addr of x: %d\n", &x);
  printf("value of x: %d\n", x);
  if(x%2==0){
    printf("Dear,%d is even.",x);
  }    
  else {
    printf("Dear,%d is odd.",x);
  }
}

