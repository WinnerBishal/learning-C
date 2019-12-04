#include<stdio.h>
  
 void switcher(){
   
   printf("Hey,Give me a character and i will guess the day starting from it.\n");
   printf("Please enter a character.\n");
   
   char x;
   scanf("%c",&x);
   
   switch (x){
     
      case 's':
         printf("Haha,It's Sunday which starts from s.\n");
         printf("I know,I know saturday also begins with s.\n");
      break;

      
      case 'm':
         printf("Aah..Monday starts from m.\n");
      break;

      case 't':
         printf("Yeah,It's Tuesday.\n");
         printf("Oh I almost forgot,Thursday as well is there.");
      break;
      
      case 'w':
         printf("Oh..It's my lucky day..Wednesday.\n");
      break;

      case 'f':
         printf("Come on,it's Friday.\n");
      break;

      default:
          printf("Are u kidding me?No day begins with %c",x);
            

      }
   
    } 
  
  void main(){
 
  while(n<=100){
   switcher();
   n=n+1;
  } 


  }  

























