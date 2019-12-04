#include<stdio.h>

int fibo(int n){
  if(n>=2)
    return fibo(n-2)+fibo(n-1);
  return 1;
}

void main(){
  printf("First 10 fibonacci number are\n");
  for (int j=0;j<10;j++){
    printf(" %d \n",fibo(j));
  }
}



 
