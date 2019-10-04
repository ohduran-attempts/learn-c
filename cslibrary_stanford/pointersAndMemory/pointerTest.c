#include <stdio.h>


int main() {
  //allocate three integers an two pointers
  int a = 1;
  int b = 2;
  int c = 3;

  int* p;
  int* q;


  // *p = a; // you can't do that! p is pointing to NOWHERE yet
  p = &a; // set p to refer to a

  q = &b; // set q to refer to b

  // Now we mix things
  c = *p; // retrieve p's pointee value (1) and put it in c

  p = q; // change p to point to where q is pointing (which is b)

  *p = 13; // whatever p was pointing at (b) now has value 13


  printf("p - %p\n q - %p\n", p, q);

  printf("q points to a place in memory that has value: %d\n", *q);

  printf("and c has value: %d\n", c);
}
