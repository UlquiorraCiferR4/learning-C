#include <stdio.h>
/*
u0 = 0
un = 3*sum[de k=0;k=n](suite(k)+1)
*/
int suite(int n){
  if (n<3){
    return n;
  }else {
    int s = suite(0);
    int i=0;
    while(i<n){
      s+= 3*(suite(i)+1);
      i++; 
    }
    return s;
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
