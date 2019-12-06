#include<stdio.h>

int swap(int a,int b){

  int temp;

  printf("Initial values : a=%d ,b=%d \n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("Final values : a=%d, b=%d \n",a,b);
  return 1;
  }
  
int main(){

int a,b;

  printf("Please enter two integer values for a and b in the pattern:a(space)b\n");
  scanf("%d %d",&a,&b);
  swap(a,b);
  


}
