#include <stdio.h>
int main (){
  char text[100];
  printf("give me ur name :");
  fgets(text,sizeof(text),stdin);
  printf("Hello Mr %s",text);
  return 0;
}
