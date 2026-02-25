// 1) ecrire une fonction  qui retourne le némé terme de la suite
// 2) calc et  affichier les termes inferieur a un entier entre par l'utiliasateur , ainsi leur somme 
#include <stdio.h> 

int suite(int n){
  if (n<3){
    return n;
  }else{
    return 2*(suite(n-1)+suite(n-2));
  }
}
int main(){
  int n ;
  do{
  printf("donner n :");
  scanf("%d",&n);
  }while(!(n>0));
  int res = suite(n);
  printf("%d",res);
  return 0;
}
