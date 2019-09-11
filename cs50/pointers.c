#include <stdio.h>

int main(void){
  int *p;

  int arr[3];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  printf("The pointer to the array is %p\n", &arr);
  printf("The pointer to the first element of the array is %p\n", &arr[0]);

}
