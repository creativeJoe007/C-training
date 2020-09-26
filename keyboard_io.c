#include <stdio.h>

int main() {
 int c;
 printf("Please input a number \n");
 c = getchar();
 printf("You entered \n");
 putchar(c);

 char str[100];
 printf("\nEnter a line: \n");
 scanf("%s", str);
 printf("You entered %s \n", str);
 return 0;
}