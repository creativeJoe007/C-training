#include <stdio.h>

int main() {
 const char sample = 'A';

 // If you dont add break to the end of your switch statement here, it would loop till the end

 switch (sample) {
  case 'A':
   printf("Excellent\n");
   break;
  case 'B':
  case 'C':
   printf("Good\n");
   break;
  case 'D':
   printf("Pass\n");
   break;
  case 'F':
   printf("Pass\n");
   break;
  default:
   printf("Nothing found\n");
 }
}
