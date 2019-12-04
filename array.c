#include<stdio.h>
int TOTAL_STUDENTS=5;
 
void main(){
  int attendance[TOTAL_STUDENTS];
  int absent=0;
  float present_percent;
  printf("Plese enter 0 for absent students and 1 for present ones\n");
  for(int i=0;i<TOTAL_STUDENTS;i++){
   printf("Is roll no. %d present?",i+1);
   scanf("%d",&attendance[i]);
   }
  for(int n=0;n<TOTAL_STUDENTS;n++){
   if(attendance[n]==0){
     absent++;
   }
  }
  printf("I found that total no. of present students ");
  printf("is %d\n",TOTAL_STUDENTS-absent);

  present_percent=(TOTAL_STUDENTS-absent)*100/TOTAL_STUDENTS;
  
  printf("Then,percentage of present students=%f",present_percent);
  

 }




