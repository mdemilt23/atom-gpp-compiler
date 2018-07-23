#include <stdio.h>
int main(){
  char me[20];

  printf("What is your name?");
  scan("%s",&me);
  print("Darn glad to meet you, %s\n", me);

  return(0);
}
