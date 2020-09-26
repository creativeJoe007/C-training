#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 // MALLOC
 int *pttr;
 printf("Size of the sizeof(pttr) is %ld \n", sizeof(pttr));
 printf("Size of the sizeof(*pttr) is %ld \n", sizeof(*pttr));
 pttr = (int *) malloc(15 * sizeof(*pttr));
 printf("Value of malloc is %d \n", * pttr);

 if (pttr != NULL) {
   *(pttr + 5) = 500;
   printf("Value of the 6th integer is %d \n", *(pttr + 5));
   printf("Address of the 6th integer is %p \n", (pttr + 5));
 }

 free(pttr);
 printf("Address of pttr is %p \n", pttr);
 printf("Value of pttr is %d \n", *pttr);
 printf("Result of pttr == NULL is %d \n", (pttr == NULL));

 // CALLOC
 // is mainly used for allocation data to complex data types like arrays and structs
 int * c_ptr, sum = 0, ii = 0;
 c_ptr = calloc(10, sizeof(int));
 printf("Value of calloc is %d \n", * c_ptr);

 if (c_ptr == NULL) {
   printf("Opps, not enough memory \n");
 } else {
   for (; ii < 10; ii++)
   {
     // Add value
     * (c_ptr + ii) = ii;
     sum += * (c_ptr + ii);
   }
   printf("Sum = %d \n", sum);
 }
 free(c_ptr);

 // REALLOC
 char * cha;
 cha = (char *) malloc(sizeof(char) * 10);
 strcpy(cha, "Programming!");
 printf(" %s,  Address = %p\n", cha, cha);

 cha = (char *) realloc(cha, 20);
 strcat(cha, "In C!!");
 printf(" %s,  Address = %p\n", cha, cha);

 // Dynamically allocating memory to Array
 int ele = 2, j = 0;
 int * eleArr;
 eleArr = calloc(ele, sizeof(int));

 for (int j = 0; j < ele; j++) { eleArr[j] = j; }
 for (int j = 0; j < ele; j++) { printf("eleArr[%d]=%d\n", j, eleArr[j]); }

 // realloc
 ele = 4;
 eleArr = (int *) realloc(eleArr, ele);
 for (int j = 2; j < ele; j++) { eleArr[j] = j; }
 for (int j = 0; j < ele; j++) { printf("eleArr[%d]=%d\n", j, eleArr[j]); }

 free(eleArr);

 int *pptr = (int *) malloc(10);
 pptr[0] = 10;
 pptr[1] = 50;

 printf("Value of PPtr %d \n", *pptr);
 printf("Address of PPtr %p \n", pptr);
 printf("Value of PPtr[1] %d \n", pptr[1]);
 printf("Value of PPtr[0] %d \n", pptr[0]);
 
 return 0;
}