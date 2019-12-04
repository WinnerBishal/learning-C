#include<stdio.h>

int fact(int n);

void main(){
 int n;
  printf("Please enter a positive number to get it's factorial.\n");

  scanf("%d",&n);

  int ans = fact(n);
  
  printf("Hence %d! = %d ",n,ans);

}

int fact(int n){
  if (n != 0 && n>0) 
	return  n*fact(n-1);
  else 
	return 1;


}
