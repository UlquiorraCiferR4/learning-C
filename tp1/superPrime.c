#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int power(int i){
  int s = 10;
  for (int k=0;k<i;k++){
    s *= 10;
  }
  return s;
}
int ln(int n);
bool isprime(int n);
int main(){
  int n;
  printf("test if SUper Prime :  ");
  scanf("%d",&n);
  int p = n;
  while (n%10 !=0 && isprime(p)){ 
    if (isprime(n)){
      printf("%d is prime\n",n);
    }else{
      printf("%d isn't prime \n",n);
    }
    p = n;
    n = n/10;
  }
  printf("##################\n");
  if (p>0 && isprime(p)){
    printf("prime");  
  }else{
    printf("not prime ");
  }
}
bool isprime(int n){
  if (n==0 || n==1) return false; 
  if (n %2 == 0 ) return false;
  else 
    for (int i=2;i<n-2;i++)
      if (n%i == 0) return false;
  return true;
}
int ln (int n){
  int i =0 ;
  do {
    n = n/10;
    i++;
  }while(n>0);
  return i;
}
