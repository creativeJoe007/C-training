#include <stdio.h>
#include <string.h>

struct Book {
 char title[50];
 char author[50];
 char subject[100];
 int book_id;
}; // this is optional and can contain multiple

struct Date {
  unsigned int d;
  unsigned int m;
  unsigned int y;
};

struct MinimizedDate {
  unsigned int d: 5;
  unsigned int m:4;
  unsigned int y;
};

void printStruct(struct Book book);
void printStructWithAddress(struct Book *book);

int main() {
 struct Book book;
 struct Book book2;

 strcpy(book.author, "Joseph Martins");
 strcpy(book.subject, "How to See Money on the Floor | Tutorial");
 strcpy(book.title, "How to see money on the floor");
 book.book_id = 2345656;

 strcpy(book2.author, "Telecom Billing");
 strcpy(book2.subject, "Telecom Billing Tutorial");
 strcpy(book2.title, "Telecom Billing");
 book2.book_id = 3245409;

 // Structure in Function
 printStruct(book);
 printStruct(book2);

 // Passing address to function
 struct Book *book3 = &book;
 printStructWithAddress(book3);
 printStructWithAddress(&book2);

 // BIT FIELD
 // we aer using date struct here
 struct Date date = { 31, 13, 2020 }; // another way to initialize a Struct
 printf("\n");
 printf("Size of Date struct itself is %lu bytes \n", sizeof(struct Date));
 printf("Value of date is %d/%d/%d \n", date.d, date.m, date.y);

 // Now let's optimize, since we know certain values would never go beyond certain things
 struct MinimizedDate optmz_date = {31, 12, 2020}; // 
 printf("\n");
 printf("Size of MinimizedDate struct itself is %lu bytes \n", sizeof(struct MinimizedDate));
 printf("Value of date is %d/%d/%d \n", optmz_date.d, optmz_date.m, optmz_date.y);
 return 0;
}

void printStruct(struct Book book) {
 printf("\n");
 printf( "Function: Book title : %s\n", book.title);
 printf( "Function: Book author : %s\n", book.author);
 printf( "Function: Book subject : %s\n", book.subject);
 printf( "Function: Book book_id : %d\n", book.book_id);
}

void printStructWithAddress(struct Book *book) {
 printf("\n");
 printf( "Function: Book title : %s\n", book->title);
 printf( "Function: Book author : %s\n", book->author);
 printf( "Function: Book subject : %s\n", book->subject);
 printf( "Function: Book book_id : %d\n", book->book_id);
}