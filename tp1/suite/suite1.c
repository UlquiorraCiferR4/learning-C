#include <stdio.h>


int suite(int n){
  if (n==1){
    return 1;
  }else if (n==2){
    return 2;
  }else {
    return suite(n-1)* suite(n-2);
  }
}

int main(){
  int n ;
  printf("donner n :");
  scanf("%d",&n);
  int res = suite(n);
  printf("%d",res);
  return 0;
}
