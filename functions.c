#include <stdio.h>

int max(int, int);
int swap(int, int);
int real_swap(int *a, int *b);

int main() {
  int maxNumber = max(3, 5);
  printf("Max number is: %d\n", maxNumber);

  // Passing parameter by value (this is the default in C)
  int a = 10;
  int b = 20;

  printf("A before swap %d\n", a);
  printf("B before swap %d\n", b);
  swap(a, b);
  printf("A after swap %d\n", a);
  printf("B after swap %d\n", b);

  printf("\n");

  // Now we are going to attempt to change a and b using pointer (&)
  printf("A before swap %d\n", a);
  printf("B before swap %d\n", b);
  real_swap(&a, &b);
  printf("A after swap %d\n", a);
  printf("B after swap %d\n", b);
}

int max(int i, int j) {
 return i > j ? i : j;
}

int swap(int a, int b) {
 int temp = a;
 a = b;
 b = temp;

 return 0;
}

int real_swap(int *a, int *b) {
 // by adding *, I am telling this function to accept only pointers reference
 int temp = *a;
 *a = *b;
 *b = temp;

 return 0;
}
