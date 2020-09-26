#include <stdio.h>
#include <string.h>

unsigned long long int factorial(int i) {
 if (i == 1) {
   return 1;
 }
 return i * factorial(i - 1);
}

// unsigned int fibonacci(int i) {
//  if (i == 0) return 0;
//  else if (i == 1) return 1;

//  printf("%d \n", i);
//  return fibonacci(i - 1) + fibonacci(i-2);
// }

void fibonacci(int i) {
 int prev = 0;
 unsigned long current = 1;
 for (int j = 0; j < i; j++) {
   current += prev;
   printf("The %dth position is %ld \n", j, current);
   prev = current;
 }
}

int main() {
 int i = 6;
 printf("Size of unsigned long long int is %ld \n", sizeof(unsigned long long int));
 printf("factorial of %d is %lld \n", i, factorial(i));

 // for (int i = 0; i < 6; i++) {
 //  // printf("%d,", fibonacci(i));
 //  fibonacci(i);
 //  printf("\n\n");
 // }
 fibonacci(6);
 return 0;
}