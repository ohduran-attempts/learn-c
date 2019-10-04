#include <stdio.h>

int * TAB() {
  // Returns a pointer to an int
  int temp;
  return(&temp);
}

int main(){
  int* ptr;

  ptr = TAB();
  *ptr = 42;

  printf("%d\n", *ptr);  // Runtime error!! The pointee was local to TAB
}
