#include <stdlib.h>
#include <stdio.h>

void Heap1(){
  int* intPtr; // local pointer variable

  intPtr = malloc(sizeof(int)); // allocate heap block and stores the pointer

  // now that the pointer is filled with a valid address (given by malloc),
  // we can fill the pointee with a value.
  *intPtr = 42;


  printf("%d\n", *intPtr);

  free(intPtr);
  intPtr = NULL;
}


int main() {
  Heap1();
  return 0;
}
