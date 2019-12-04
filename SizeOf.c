#include <stdio.h>
 
// write a fucntion that will print the following output based ont the size of the data type
// size of int : X bytes
// size of float : Y bytes
// size of char : Z bytes

// Use the function sizeOf(datatype) from stdio.h

  void main(){
  int x=sizeof(int);
  int y=sizeof(float);
  int z=sizeof(char);
  printf("The size of different data types are isted below : \n");
  printf("1.Size of int=%d\n",x);
  printf("2.Size of float=%d\n",y);
  printf("3.Size of char=%d\n",z);
  

}
