#include <stdio.h>


void swap(int *a , int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int main(){

  int x = 1;
  int y = 2;

  printf("x is %i, y is %i\n", x, y);
  swap(&x,&y);
  printf("x is %i, y is %i\n", x, y);
}
