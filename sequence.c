#include <stdio.h>
 
 void main(){
  int n,sum;
  int d=1;
  int x=10;
  printf("am counting\n");

  for(n=d;n<=x;++n){
      sum = sum + n;
    }
  printf("sum of %d numbers is %d",x-d+1,sum);
 }
