#include <stdio.h>
#include <stdbool.h>

bool premier(int p){
  return true;
}
bool superPremier(int p);

int main(){
  int p;
  printf("donner un nombre pour tester : ");
  scanf("%d",&p);
  if (superPremier(p)){
    printf("%d est un nombre super premier ! ",p):
  }else{
    printf("%d n'est pas un nombre premier ! ",p)
  }
}
