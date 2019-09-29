#include <stdio.h>
#include <stdlib.h>

int main() {
  int a; // goes on stack

  // into heap
  int *p;
  p = (int *) malloc(sizeof(int));

  // assign a value to the pointee
  *p = 10;

  // free memory!!
  free(p);

  // and assign again
  p = (int*)malloc(20 * sizeof(int));
  for(int i = 0; i < 20; i++){
    *(p + i) = i;
  }

  for(int j = 0; j < 20; j++){
    printf("The number is now %d\n", *(p+j));
  }

  // and free again
  free(p);
}
