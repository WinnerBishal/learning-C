#include<stdio.h>

void main(){
  int n;
  int x;
  int fact=1;

    printf("Please enter an integer.\n");
    scanf("%d",&x);

  for (n=1;n<=x;n++){
    fact=fact*n;
   }
  
    printf("The factorial of %d is %d",x,fact);

  
    
    }

    
