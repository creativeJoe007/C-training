#include <stdio.h>

// Define
#define TRUE 1;
#define FALSE 0;

// Adding typedef to struct
typedef struct Book {
 char title[10];
 char details[20];
 unsigned int isSold: 1;
} Book;

int main() {
 // Used to abbreviate a type into anything you want
 typedef unsigned char FLEX;
 Book book = {"Me", "Me me"};
 printf("Value of isSold before %d\n", book.isSold);
 book.isSold = TRUE;
 printf("Value of isSold now %d\n", book.isSold);

 FLEX byte1 = 20;
 printf("Size of BOOK is %lu Bytes\n", sizeof(Book));
 printf("Size of FlEX is %lu Bytes\n", sizeof(FLEX));
 return 0;
}