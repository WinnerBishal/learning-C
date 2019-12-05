#include<stdio.h>

int x=10;

void scanner(char input[x]){
  for(int n=0 ; n < x ; n++){
  scanf(" %c",&input[n]);
  }
}

void reverse_printer(char input[x]){ 
  for(int k=x-1;k>=0;k--){
  printf("%c",input[k]);
  }
}

void main(){
  
  char input[x]; 
  printf("Please enter a Word.\n");
  
  scanner(input);
  reverse_printer(input);

}
