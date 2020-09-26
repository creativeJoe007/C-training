#include <stdio.h>

#define AGE 30
extern int external; // this works just the way function works, where they can be declared at the top and defined else-where

int main() {
 int i,j,k;
 char p;
 float flt;
 double db;

 // C doesn't protect you from an overflow
 p = 205;
 p = p + 50;
 printf("%d\n", p);

 // what happens when you add a value to the wrong type
  char jj;
  jj = 2000; // GCC or clang would warn you
  jj += 2000; // GCC or clang isn't going to warn you
  printf("%d \n", jj);

  const int _AGE = 22; // constant
  int external = 10;
  printf("%d \n", external);

}
