#include <assert.h>
#include <stdio.h>
#define MAX_INTS 100



int main(){
  int ints[MAX_INTS];
  int i = 1+2+3;

  assert(i>=0);
  assert(i<MAX_INTS);
  ints[i] = 'b';

  printf("the item added is %c\nand i is %d\n", ints[i], i );
}
