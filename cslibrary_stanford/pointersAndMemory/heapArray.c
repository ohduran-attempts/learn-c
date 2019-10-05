#include <stdlib.h>
#include <stdio.h>

struct fraction {
  int numerator;
  int denominator;
};

void HeapArray(){


  struct fraction* fracts;
  int i;

  //allocate the array
  fracts = malloc(sizeof(struct fraction) * 100);

  for( i = 0; i < 99; i++){
    fracts[i].numerator = 22;
    fracts[i].denominator = 7;
  }

  free(fracts);

}
