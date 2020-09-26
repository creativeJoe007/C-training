#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(void) {
 FILE *pf;
 int errornum;

 pf = fopen("dontexist.txt", "rb");

 if (pf == NULL) {
  errornum = errno;
  fprintf(stderr, "Value of error: %d \n", errornum);
  perror("Error printed by perror");
  // fprint allows you to write to a file, which can be an actual file
  // Or a standard error file. The last string parameter is a global variable that holds
  // Error name
  fprintf(stderr, "Error opening file: %s\n", strerror(errornum));
 }

 // Divide by Zero
 int dividend = 20;
 int divisor = 0;
 int quotient;

 if (divisor == 0) {
  fprintf(stderr, "Opps, divisor cannot be zero \n");
  exit(EXIT_FAILURE);
 }

 quotient = dividend / divisor;
 fprintf(stderr, "Value of quotient : %d\n", quotient );
 exit(EXIT_SUCCESS);
}