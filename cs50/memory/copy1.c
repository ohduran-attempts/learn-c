#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
  //get a string
  char *s = "abc";
  if (!s){
    return 1;
  }

  //allocate memory for another string
  char *t = malloc((strlen(s) + 1) * sizeof(char));
  if (!t){
    return 1;
  }

  // copy string into memory
  for (int i = 0, n = strlen(s); i <= n; i ++){
    t[i] = s[i];
  }

  // capitalise first letter in copy
  if (strlen(t) > 0){
    t[0] = toupper(t[0]);
  }

  // print strings
  printf("String s: %s\n", s);
  printf("String t: %s\n", t);

}
