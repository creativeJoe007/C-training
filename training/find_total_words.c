#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

char * trim_string(char * str) {
 for (int i = 0; i < strlen(str); i++) {
  if (str[i] == '\n') {
   str[i] = '\0';
  }
 }
 return str;
}

int main() {
 int size = 100;
 char input[size];
 char file_char;
 int has_found_letters = 0;
 int total_words = 0;
 FILE *fp;

 printf("INPUT PATH TO A FILE: \n");
 fgets(input, size, stdin);
 fp = fopen(trim_string(input), "r");

 if (fp == NULL) {
  fprintf(stderr, "%s\n", strerror(errno));
  exit(EXIT_FAILURE);
 }

 /* 
 Since we don't need the values in the file
 We wouldn't be saving them, they will just help us get the total words
 */
 while((file_char = fgetc(fp)) != EOF) {
   if (file_char != '\n' && file_char != ' ' && file_char >= 65) {
     has_found_letters = 1;
   } else {
     if (has_found_letters == 1) {
      has_found_letters = 0;
      total_words++;
     }
   }
 }

 /*
 Because we are not too certain if the file ended with a text and not space, \n or anything non-text
 There fore, the else may not be executed. To avoid having total_words not being recorded
 We check if we found a letter that hasn't been recorded after loop the entire file, then we 
 record it.
 */
 if (has_found_letters == 1) {
  has_found_letters = 0;
  total_words++;
 }

 fclose(fp);
 printf("Total words found is %d\n", total_words);
 exit(EXIT_SUCCESS);
}