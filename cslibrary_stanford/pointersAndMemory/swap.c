#include <stdio.h>

void Swap(int* a, int* b){
  int temp;

  temp = *a;
  *a = *b;

  *b = temp;
}

int main() {
  int x = 1;
  int y = 2;

  Swap(&x, &y);

  printf("x: %d, y: %d\n", x, y);


  int scores[10];
  scores[0] = 1;
  scores[9] = 2;

  Swap(&(scores[0]), &(scores[9]));

  printf("first: %d, last: %d\n", scores[0], scores[9]);

  //and back to its initial result doing:
  Swap(scores, scores + 9); // the address of the list is the first item
  // and pointer math means 9 sizeof ints.

  printf("first: %d, last: %d\n", scores[0], scores[9]);
}
