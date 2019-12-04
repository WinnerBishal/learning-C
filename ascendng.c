#include <stdio.h>

void main(){
  int random[8]={8,2,13,0,10,5,3,1};
  int sorted[8];
  int x,j,p;
  
  for(x=0;x<=7;x++){
     int n=0;
     for(j=0;j<=7;j++){
        if (random[x] > random [j]){n++;}
        
     }
     sorted[n]=random[x];
    
  } 
  
  for(p=0;p<=7;p++){printf(" %d ",sorted[p]);}  
  
}
