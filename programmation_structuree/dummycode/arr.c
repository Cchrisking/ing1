#include <stdio.h>
void arrwithsize(int arr[5], int size){
  printf("first with bracket size\n%d\n", arr[5]);
  for(int i=0; i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("\n");
}
void arrwithnosize(int arr[], int size){
  printf("with no size\n%d\n", arr[5]);
  for(int i=0; i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("\n");
}
void arrwithptr(int *arr, int size){
  printf("with pointer\n%d\n", arr[5]);
  for(int i=0; i<size; i++){
    printf("%d\n", arr[i]);
  }
  printf("\n");
}
int main(int argc, char const *argv[]) {
  int array[10] = {4,2,5,7,1,0,3,6,9,8};
  arrwithsize(array, 10);
  arrwithnosize(array, 10);
  arrwithptr(array, 10);
  return 0;
}
