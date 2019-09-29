#include <string.h>
#include <assert.h>
#include <stdio.h>
// Various methods to copy a string source[] into a destination dest[]


void strcpy1(char dest[], const char source[]){
  int i = 0;

  while(1){
    dest[i] = source[i];

    if ( dest[i] == '\0') break;

    i++;
  }
}

void strcpy2(char dest[], const char source[]){
  int i = 0;

  while((dest[i] = source[i]) != '\0'){
    i++;
  }
}

// each time the while condition is evaluated,
//it moves dest and source pointers one step to the right in memory
void strcpy3(char dest[], const char source[]){
  while(
    (*dest++ = *source++) != '\0'
  );
}

// \0 evaluates as FALSE
void strcpy4(char dest[], const char source[]){
  while (
    *dest++ = *source++;
  )
}


int main(){
  char destination[3];

  strcpy1(destination, "abc");
  printf("Result of applying strcpy1: %s\n", destination);
  strcpy2(destination, "def");
  printf("Result of applying strcpy2: %s\n", destination);
  strcpy3(destination, "ghi");
  printf("Result of applying strcpy3: %s\n", destination);
}
