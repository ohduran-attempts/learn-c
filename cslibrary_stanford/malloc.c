#include <stdlib.h>
#include <assert.h>


int main(){
  int a[1000];

  int *b;
  b = (int*) malloc(sizeof(int) * 1000);

  assert(b != NULL);
  a[123] = 13;

  b[123] = 13;

  b = realloc(b, sizeof(int) * 2000);
  assert(b != NULL);
  free(b);
}
