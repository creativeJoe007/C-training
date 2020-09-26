#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

double average(int num, ...) {
  va_list vlist;
  double sum = 0.0;
  
  // initialize valist
  va_start(vlist, num);

  for (int i = 0; i < num; i++) {
    sum += va_arg(vlist, int);
  }

  // clear va from memory
  va_end(vlist);

  return sum / num;
}

int main() {
 printf("Average is %f \n" ,average(3, 0, 4, 6));
 printf("Average is %f \n" ,average(5, 1, 5, 2, 8, 7));
 exit(EXIT_SUCCESS);
}