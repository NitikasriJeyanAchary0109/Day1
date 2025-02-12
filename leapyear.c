#include <stdio.h>
int main(){

  int year = 2013;
  if((year == 4 && year != 100) || year == 400){
    printf("Leap Year");
  }
  else {
    printf("Not a leap Year);
  }
      
  return 0;
}
