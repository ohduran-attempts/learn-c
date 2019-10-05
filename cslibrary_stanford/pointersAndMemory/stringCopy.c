#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


/*
  Given a C string, return a heap allocated copy of the string.
  Allocate a block in the heap of the appropriate size,
  copies the string into the block, and returns a pointer to the block.

  The caller takes over ownership of teh block and is responsible for freeing it.

*/

char* StringCopy(const char* string){
  char* newString;
  int len;


  len = strlen(string) + 1; // + 1 means the ending '/0'
  newString = malloc(sizeof(char) * len); // element size * number of elements
  assert(newString != NULL); // will make sure that memory isn't full
  strcpy(newString, string); // copy the passed in string to the block

  return newString; // return the pointer. TO BE FREED. Local memory cannot do this.
}

int main() {
  char* str;

  str = StringCopy("Hello, World");

  printf("address%p now contains the string ", str);
  int i;
  for(i = 0; *(str + i) != '\0'; i++){
    printf("%c", *(str + i));
  }
  printf("\n");
  free(str);
  return 0;
}
