#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <stdbool.h>

bool ask();
void show(int *t,int i);


int main(){
  int size =2;
  int *t = malloc(sizeof(int)*size);
  printf("wanna start : ");
  int count = 0;
  char rep;
  while (toupper(rep = getchar()) == 'Y') {
    printf("Enter t[%d] : ",count);
    scanf("%d",t+count);   
    printf("keep ? : ");
    rep = getchar();
    count++;
  }
  printf("the code ends here ! \n");
  show(t,count);
  printf("%ld",sizeof(t)/sizeof(t[0]));
}
void show(int *t,int i){
  for (int j=0;j<i;j++) 
    printf("%d\n",t[j]);
}

