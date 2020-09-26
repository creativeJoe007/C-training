#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void exist();
int rand(void);

int main() {
  printf("CHAR_BIT: %d\n", CHAR_BIT);
  printf("SCHAR_MIN: %d\n", SCHAR_MIN);
  printf("SCHAR_MAX: %d\n", SCHAR_MAX);
  printf("UINT_MAX: %d\n", UINT_MAX);
  printf("UCHAR_MAX: %d\n", UCHAR_MAX);
  printf("INT_MAX: %d\n", INT_MAX);
  printf("INT_MIN: %d\n", INT_MIN);
  printf("LONG_MAX: %ld\n", (long) LONG_MAX);
  printf("LONG_MIN: %ld\n", (long) LONG_MIN);
  // FLOAT
  printf("SIZE_OF: %ld\n", sizeof(float));
  printf("SIZE_OF LONG: %ld\n", sizeof(long));
  printf("SIZE_OF INT: %ld\n", sizeof(int));
  printf("SIZE_OF SHORT: %ld\n", sizeof(short));
  printf("SIZE_OF CHAR: %ld\n", sizeof(char));
  printf("FLT_MAX: %g\n", (float) FLT_MAX);
  printf("FLT_MIN: %g\n", (float) FLT_MIN);


  // Void means none
  exist();
  rand();

  // For example, a memory allocation function void *malloc( size_t size ); returns a pointer to void which can be casted to any data type
  void *p = (void *)malloc(sizeof(long));
  printf("Yoo %s: \n", p);

  return 0;
}

void exist() {
  printf("I don't return anything \n");
}

int rand(void) {
  printf("I don't accept anything \n");
  return 0;
}
