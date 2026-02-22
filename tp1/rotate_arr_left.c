#include <stdio.h>

void rotate_left(int *arr,int len,int n);
void rotate_left_once(int *arr,int len);
void show(int *arr, int len);

int main(){
  int arr[] = {1,2,3,4,5,6,7}, len = 7;
  int n;
  printf("how many times you wan't to rotate arr :");
  scanf("%d",&n);
  rotate_left(arr,len,n);
  show(arr,len);
}

void show(int *arr, int len){
  for (int i=0;i<len;i++)
    printf("%d",arr[i]);
}
void rotate_left(int *arr,int len,int n){
     for (int i=0;i<n;i++)
       rotate_left_once(arr,len);
}
void  rotate_left_once(int *arr,int len){
  int temp = arr[0];
  for (int i=0;i<(len-1);i++)
    arr[i] = arr[i+1];
  arr[len-1] = temp;
}
