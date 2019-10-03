#include <stdio.h>


int main() {
  int *p;
  int num;
  int * numPtr;

  num = 42;
  numPtr = &num;

  printf("address: %p\n", p);
  printf("now print num: %d\n", num);
  printf("num: %d, located in address %p\n", num, numPtr);
  printf("%p\n is the address of num", &num);
}
