#include <stdio.h>
#include <string.h>

int main(void) {
  //get a string
  char *s = "stringy";
  if(!s){
    return 1;
  }

  // print string, one character per line
  for (int i = 0, n = strlen(s); i < n; i++){
    printf("%c\n", *(s + i));
  }
  return 0;
}
