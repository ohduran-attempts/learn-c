#include <stdio.h>

static void Swap(int *a, int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}


static void IncrementAndSwap(int *x, int *y){
  (*x)++;
  (*y)++;
  Swap(x, y); // x, y are already pointers
}

int main(){

  int alice = 10;
  int bob = 20;

  Swap(&alice, &bob);
  printf("alice: %d\nbob: %d\n", alice, bob);
  IncrementAndSwap(&alice, &bob);
  printf("alice: %d\nbob: %d\n", alice, bob);

  return 0;
}
