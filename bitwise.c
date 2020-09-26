#include <stdio.h>

int main() {
 int a = 20;
 int b = 21;
 int c = 0;

 c = a & b;
 printf("AND - Value of c is %d\n", c );

 c = a | b;
 printf("OR - Value of c is %d\n", c );

 c = a ^ b;
 printf("Exclusive OR - Value of c is %d\n", c );

 c = a << 2;
 printf("Left shift - Value of c is %d\n", c );

 c = a >> 2;
 printf("Right shift - Value of c is %d\n", c );

 a = 10;
 c = ~(a);
 printf("Complement - Value of c is %d\n", c );

 return 0;
}