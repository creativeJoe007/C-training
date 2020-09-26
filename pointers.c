#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void getSeconds(unsigned long *lng_val_ptr);
int* getRandom();
int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int division(int num1, int num2);

int main() {
 int var1;
 int pp = 10;
 char var2[10];

 printf("Address for Var1: %p \n", (void *)&var1);
 printf("Address for Var2: %p \n", (void *) &var2);
 printf("\n");

 // How to use pointer
 int p = 20; // creates a regular variable
 int *t; // creates a pointer variable

 t = &p; // &p returns the address of the variable

 printf("Address of variable p: %p \n", &p);
 printf("Address stored in variable t: %p \n", t);
 printf("Value of Address stored in variable t: %d \n", *t);

 // Null pointer
 int *point = NULL;
 printf("The value of point is: %p \n", point);

 if (point) printf("Pointer wasn't null\n"); // WOuld print true if the pointer wasn't null
 if(!point) printf("Pointer is null\n"); // would return true if the pointer was null
 printf("\n");

 // Pointer arithmetic
 int data2 = 100;
 int data3 = 100;
 int data = 1000;
 int *pr = &data;

 printf("PR Address before incrementing %p \n", pr);
 printf("PR Value before incrementing %d \n", *pr);
 pr++;
 printf("Address of PR after increating %p \n", pr);
 printf("Value of PR after increating %d \n", *pr);
 printf("Address of data2 %p \n", &data2);
 printf("Address of data3 %p \n\n", &data3);
 printf("\n");

 // Pointer increment for Array
 int array[3] = {10,20, 30};
 int *ptr = array;

 for (int i = 0; i < 3; i++) {
  printf("Address of ptr[%d] is %p \n", i, ptr);
  printf("Value of ptr[%d] is %d \n", i, *ptr);
  ptr++;
 }
 printf("\n");

 // Pointer decrement for Array
 ptr = &array[3-1]; // getting address for last item

 for (int i = 3; i > 0; i--) {
  printf("Address of ptr[%d] is %p \n", i, ptr);
  printf("Value of ptr[%d] is %d \n", i, *ptr);
  ptr--;
 }
 printf("\n");

 // Pointer comparison
 ptr = array;
 int i = 0;
 while (ptr <= &array[3-1]) {
  printf("Address of ptr[%d] is %p \n", i, ptr);
  printf("Value of ptr[%d] is %d \n", i, *ptr);
  ptr++;
  i++;
 }
 printf("\n");

 // Array of Pointers
 int var[] = {10, 100, 200};
 int *pt[3];

 for (int i = 0; i < 3; i++)
 {
  pt[i] = &var[i];
 }

 for (int i = 0; i < 3; i++)
 {
  printf("Value of ptr[%d] is %d \n", i, *pt[i]);
 }
 printf("\n");

 char *strings[] = {
  "Me You",
  "You Me",
  "Them we"
 };

 for (int i = 0; i < 3; i++) {
  printf("Value of ptr[%d] is %s \n", i, strings[i]);
 }
 printf("\n");

 // Pointer of a Pointer
 int val = 5;
 int *ptr1 = &val;
 int **ptr2 = &ptr1;

 printf("Val is %d \n", val);
 printf("Pointer of val is %p\n", ptr1);
 printf("Address of Pointer ptr1 is %p\n", ptr2);
 printf("Value of pointer to pointer ptr1 is %d\n", **ptr2);
 printf("\n");

 // Passing Pointers in a function
 unsigned long lng_val = 100;
 unsigned long *lng_val_ptr = &lng_val;
 getSeconds(lng_val_ptr);
 printf("Value of lng_val is %ld \n", lng_val);

 // Returning Ponters
 int *pointer;

 pointer = getRandom();

 for (int i = 0;i < 10; i++) {
  printf("Pointer + [%d] is: %d\n", i, *(pointer + i));
 }

 // Function pointer
 void (*func_ptr)(unsigned long *);
 func_ptr = getSeconds;
 unsigned long temporal = 10;
 func_ptr(&temporal);

 // Array of Function pointers
 int (* pontr[4]) (int, int); // only works for functions with similarities

 return 0;
}

int sum(int x, int y) {return(x + y);}
int sub(int x, int y) {return(x - y);}
int mult(int x, int y) {return(x * y);}
int division(int x, int y) {if (y != 0) return (x / y); else  return 0;}

void getSeconds(unsigned long *lng_val_ptr) {
 *lng_val_ptr = time(NULL);
}

int* getRandom() {
  int static r[10];
  int i;

  // set the seed
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++)
  {
   r[i] = rand();
   printf("%d\n", r[i] );
  }

  return r; 
}