#include <stdio.h>

void print_incrementing_star();
void natural_incrementing_star();
void reverse_incrementing_star();

int main() {
  // natural_incrementing_star();
  // print_incrementing_star();
  reverse_incrementing_star();
  return 0;
}

void natural_incrementing_star() {
  for (unsigned int i = 0; i < 5; i++) {
   for (unsigned int j = 0; j < 5; j++)
   {
    /* code */
    printf("* ");
   }
   printf("\n");
 }
}

void print_incrementing_star() {
  for (unsigned int i = 0; i < 5; i++) {
    for (unsigned int j = 0; j <= i; j++)
    {
      /* code */
      printf("* ");
    }
    printf("\n");
  }
}

void reverse_incrementing_star() {
  for (unsigned int i = 5; i > 0; i--) {
    for (unsigned int j = 0; j < i; j++)
    {
      /* code */
      printf("* ");
    }
    printf("\n");
  }
}