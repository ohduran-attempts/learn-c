#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *p;

  int *q = malloc(sizeof(int));
  *q = 4;

  int arr[3];

  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;

  printf("The pointer to the array is %p\n", &arr);
  printf("The pointer to the first element of the array is %p\n", &arr[0]);
  printf("The value of the first element is %i\n", *arr);

  printf("This should not fail: %i\n", *q);

  printf("This should fail: %i\n", *p);

}
