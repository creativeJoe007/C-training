#include <stdio.h>

int main() {
 int a = 10;

 // making use of goto
 EYO:do {
   a++;
   if (a == 15) {
     goto EYO;
   }
   printf("A is: %d\n", a);
 } while(a < 20);
}
