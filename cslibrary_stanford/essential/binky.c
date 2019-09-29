#include <stdio.h>
#include <string.h>

int main(void){
  char string[1000];
  int len;

  strcpy(string, "binky");
  len = strlen(string);

  // Reverse the chars in the string:
  // i starts at the beginning and goes up
  // j starts at the end and goes down
  // i/j exchange their chars as they go until they meet

  int i, j;
  char temp;
  for (i = 0, j = len - 1; i < j; i++, j--){
    temp = string[i];
    string[i] = string[j];
    string[j] = temp;
  }

  printf("%s\n", string);
}
