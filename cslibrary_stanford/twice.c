#include <stdio.h>

static int Twice(int i){
  return 2 * i;
}

static void Swap(int * x, int * y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main(void){
  int num = 13;
  int a = 1;
  int b = 2;
  a = Twice(a);
  b = Twice(b + num);

  printf("a is now %d\n", a);
  printf("and b is %d\n", b);

  Swap(&a, &b);
  printf("after swaping, a is now %d\n", a);
  printf("and b is %d\n", b);
}
