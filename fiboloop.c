#include<stdio.h>

void fiboprinter(int x){

  int fibo[x];
  fibo[0]=1;
  fibo[1]=1;
  
  for(int n=2;n<=x;n++){
   
   fibo[n] = fibo[n-1] + fibo[n-2];
   
  }
  printf("Here are %d fibonacci numbers \n",x);

  for (int j=0;j <= x-1; j++){
    printf("%d \n",fibo[j]);
  }
}

void main(){
   int x;

  printf("How many fibonacci numbers do you want?Please enter an integer value.\n");

  scanf("%d",&x);
  fiboprinter(x);
  
}
