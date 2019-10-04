#include <stdio.h>

void C(int* worthRef){
  *worthRef = *worthRef + 1; // the value referenced by worthRef adds one to itself.
}

void B(int* worthRef){
  *worthRef = *worthRef + 1; // the value referenced by worthRef adds one to itself.


  // We can also do this:
  C(worthRef); //worthRef is a pointer, so no need for &
}

int main(){
  int netWorth;
  netWorth = 55; // the value of interest is local to main()

  B(&netWorth); // Pass a pointer to the value of interest using &

  printf("%d\n", netWorth); // 57

  // caller locals continue to exist while the callee is running: it's a STACK -> FIFO

}

// A person with one watch always knows what time it is. A person with two watches is never sure
