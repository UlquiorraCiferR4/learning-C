#include <stdio.h>
int search(int *arr,int len,int target){ // *arr or arr[]
  for (int i=0;i<len;i++){
    if (arr[i]==target){
      return i;
    }
  }
  return -1;
}
int main(){
  int target;
  printf("Enter the target :");
  scanf("%d",&target);
  int arr[] = {1,4,5,8,0};
  int len = sizeof(arr)/sizeof(arr[0]);  
  int res = search(arr,len,target);
  printf("position = %d",res);
}
