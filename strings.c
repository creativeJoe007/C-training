#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* toLowerCase(char *string);
char* toLowerCaseStatic(char *string);

int main() {
 char greetings[] = "Hello";

 printf("greetings: %s\n", greetings);

 for (int i = 0; i < 5; i++)
 {
  /* code */
  printf("Address of greetings[%d]: %p\n", i, &greetings[i]);
 }
 printf("\n");

 // some C functions
 char st1[] = "Hello";
 char st2[] = "World";

 void *st3 = (void *)strcpy(st1, st2); // value of st1 is now made the value of st2
 printf("Address of st1 is: %p\n", &st1); // different address
 printf("Address of st2 is: %p\n", &st2); // different address
 printf("Address of st3 is: %p\n", &st3); // different address
 printf("Value of st1 after copy is: %s\n", st1);
 printf("Value of st2 after copy is: %s\n", st2);
 printf("Value of st3 after copy is: %s\n", st3);
 printf("\n");
 // Observation, another memory has been allocated to hold the result of strcpy

 char s1[20] = "Hello";
 char s2[20] = "WORLD";

 strcat(s1, s2);
 printf("strcat(s1, s2): %s\n", s1);
 printf("Sizeof S2: %ld \n", sizeof s2);
 printf("\n\n");

 // Let's try changing the E in hello
 char *string = strchr(s2, s2[2]); // returns strings after this index
 printf("Value from index 2 of %s is: %s\n", s2, string);
 printf("\n");

 // printf("Lower case of S2 is %s \n", toLowerCase(s2)); // changes value of s2 directly
 printf("Lower case of S2 is %s \n", toLowerCaseStatic(s2)); // creates a static variable and doesnt change s2
 // printf("Lower case of S1 is %s \n", toLowerCaseStatic(s1));
 printf("Size of array is %ld \n", (sizeof s2 / sizeof s2[0]));

 char character[10];
 printf("Enter a number: \n");
 scanf("%s", character);
 int NUM = atoi(character);
 printf("Number of this item is: %d \n", NUM);
 
 return 0;
}

char* toLowerCase(char *string) {
 for(char *p=string; *p; p++) {
  printf("Value of P is %s \n", p);
  printf("Address of P is %d \n", *p);
  *p=tolower(*p);
  printf("New Value For P is %s \n", p);
 }

 return string;
}

char* toLowerCaseStatic(char *string) {
 static char p [(sizeof string)];
 printf("Byte size of string is %ld bytes\n", sizeof string);
 printf("Str len of string is %ld bytes\n", strlen(string));
 printf("Byte size of P is %ld bytes\n", sizeof p);
 printf("Address of Double is: %p \n", &string);
 printf("Address of Double is: %d \n", *string);
  printf("Value of Double is: %s \n", string);
 printf("\n\n");
 for(int i = 0; i < (strlen(string)); i++) {
  p[i]=tolower(string[i]);
 }

 return p;
}

// char * strconcate(char * dest, char * src) {
//   *dest = 
// }