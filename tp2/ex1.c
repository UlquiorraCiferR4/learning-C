#include <stdio.h>
void swap(int *a,int *b);

int main(){
  int a=1,b=2;
  printf("before swap : a=%d , b=%d",a,b);
  swap(&a,&b);
  printf("before swap : a=%d , b=%d",a,b);
}
void swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}


