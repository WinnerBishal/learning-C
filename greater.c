#include<stdio.h>
void main(){
  int x;
  int y;
 
  printf("Please enter two numbers.\n");
  scanf("%d",&x);
  scanf("%d",&y);
    
  if(x>y){
    printf("The greater number is %d",x);
  }
  else if(y>x){
    printf("The greater nuber is %d",y);
  } 
  else{
   printf("Both are equal");
  }
}
