#include <stdio.h>
#include <stdbool.h>
void afficher(int* arr,int len);
bool disjoint(int *a1,int l1,int *a2,int l2);
int main(){
  int arr1[] = {1,2,3,4};
  int arr2[] = {5,6,7};
  int l1 = sizeof(arr1)/sizeof(arr1[0]);
  int l2 = sizeof(arr2)/sizeof(arr2[0]);
  printf("arr1 = [");
  afficher(arr1,l1);
  printf("]\narr2 = [");
  afficher(arr2,l2);
  printf(" ]\n");
  if (disjoint(arr1,l1,arr2,l2))
    printf("arrays are disjoint \n");
  else
    printf("arrays are not disjoint \n");
}
void afficher(int* arr,int len){
  for (int i=0;i<len;i++)
    printf("%d ,",arr[i]);

}
bool disjoint(int *a1,int l1,int *a2,int l2){
  for (int i=0;i<l1;i++)
    for (int j=0;j<l2;j++)
      if (a1[i] == a2[j]) return false;
  
  return true;
}
