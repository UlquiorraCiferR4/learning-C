#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
bool alpha(char ch[],int n);
int main(){
  char ch[50];
  int n;
  printf("Enter your Name :");
  scanf("%s",ch);
  n = strlen(ch); 
  if (alpha(ch,n)){
    printf("alpha\n");
  }else{
    printf("not alpha\n");
  }
}
bool alpha(char ch[],int n){
  for (int i = 0;i<n;i++){
    if (toupper(ch[i])<'A'||toupper(ch[i])>'Z'){
      return false;
    }
  }
  return true;
}
