#include <stdio.h>

void Foo(int a){
  int i;
  float scores[100];

  a = a + 1;

  for (i=0; i<a; i++){
    printf("%d\n", i);
  }
}


int main(){
  Foo(4);
}
