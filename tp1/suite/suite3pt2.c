#include <stdio.h>
/*
u0 = 0,u1 =1,u2 =2
if n>= 3 ; un = 5*Un-1 - 8*Un-2 + 4*Un-3
*/
int suite(int n){
  if (n<3)
    return n;
  else {
    return 5*suite(n-1) - 8*suite(n-2) + 4*suite(n-3);
  }   
}
int main(){
  int n ;
  do{
  printf("donner n :");
  scanf("%d",&n);
  }while(n<0);
  int res = suite(n);  
  printf("the result : %d",res);
}
