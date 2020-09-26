#include <stdio.h>
#include <string.h>

char * trim_string(char * str) {
 for (int i = 0; i < strlen(str); i++) {
  if (str[i] == '\n') {
   str[i] = '\0';
  }
 }
 return str;
}

char check_for_palindrome(char *str) {
 int size = strlen(str) - 1; // just to get rid of null
 char reversed[size + 1];
 for (int i = size; i >= 0; i--) {
  *(reversed + (size - i)) = str[i];
 }
 reversed[size + 1] = '\0'; // end string

 return strcmp(reversed, str);
}

int main() {
 int size = 100;
 char input[size];

 printf("Enter a word: \n");
 fgets(input, size, stdin);

 switch (check_for_palindrome(trim_string(input)))
 {
 case 0:
  printf("\n%s is a valid palindrome \n", input);
  break;
 
 default:
  printf("\n%s is not a valid palindrome \n", input);
  break;
 }
}