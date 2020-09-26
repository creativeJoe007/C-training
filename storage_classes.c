#include <stdio.h>

static int counter = 5;
void func();

// to test extern, we will create another file called extern
int count = 5;
extern void global_func();

int main() {
 // AUTO can only be called in a function
 // int p;
 auto int p; // same same

 // REGISTER: store value in the CPUs Register
 register int io = 30;
 printf("%ld Bytes \n", sizeof(io));

 // Static variable function usage
 while (counter--) {
  func();
 }

 global_func();
}
void func() {
  // STATIC: don't remove this variable even when its out of scope
  static int i = 5;
  i++;

  printf("I is %d and counter is: %d \n", i, counter);
}
