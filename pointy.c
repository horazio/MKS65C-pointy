#include <stdio.h>

int main(){
  unsigned int num = 1030500302;
  char * p2 = &num;
  //int * p1  = &num;
  //unsigned int num2 = * p1; 
  // p1++;
  printf(" %x \n", num);
  printf(" %d \n ", num);
  

  
  printf(" %hhx \n", * p2);

  p2++;

  printf(" %hhx \n", *p2);

  p2++;

  printf(" %hxx \n", *p2);

  p2++;

  printf(" %hxx \n", *p2);
  * p2 += 16;
  
  p2--;
  * p2 += 16;
  
  p2--;
  * p2 += 16;
  
  p2--;
  
  * p2 += 16;
  * p2 += 16;
  * p2 += 16;
  * p2 += 16;
  * p2 += 16;
  
  
  printf(" %x \n", num);
  printf(" %d \n ", num);

  return 0;
}
