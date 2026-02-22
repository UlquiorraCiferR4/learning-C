#include <stdlib.h> // where malloc  is 
#include <stdio.h>

int main(){
  int Maxsize = 2;
  int *buffer = malloc(sizeof(int)*Maxsize);
  int input = 0;
  int new_size = 0;
  while (true){
    if (new_size == Maxsize){
      Maxsize*= 2;
      buffer = realloc(buffer, sizeof(int)*Maxsize);
    }
    printf("Enter :");
    scanf("%d",&input);
    if (input == -1) break;
    else buffer[new_size] = input;
    new_size++; 
  }
  for(int i=0;i<new_size;i++)
    printf("buffer[%d] = %d\n",i,buffer[i]);
}
