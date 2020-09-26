#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getAverage(int [], int);
double getSuperAverage(int first, int last, int data[first][last]);
int* generateRandom();

void test(double *balances) {
  printf("Address of Double is: %p \n", balances);
  printf("Value of Double is: %f \n", *balances);
}

int main() {
 short array [5] = {100, 300, 200, 400, 500};
 double balance [10];
 double _balance[] = {1000, 4000, 9000}; // memory needed to handle initialized data is allocated

 // Multi dimensional array
 int threedim [5][10][14];
 // initializing multi-dimensional array
 int a [3][3] = {
  {1,2,3},
  {4,5,6},
  {6,7,8}
 };
 // a short example
 int b [3][3] = {1,2,3,4,5,6,7,8};

 // looping in array
 int c [5][2] = {
  {1,2}, {3,4}, {5,6}, {7,8}, {9,10}
 };
 printf("GetAverage %f \n", getSuperAverage(5, 2, c));

 for (int i = 0; i < 5; i++)
 {
  /* code */
  for (int j = 0; j < 2; j++) {
    printf("c[%d][%d]=%d \n", i, j, c[i][j]);
  }
 }

 // You can pass data
 int scores[5] = {100, 5, 100, 50, 130};
 double avg;
 
 avg = getAverage(scores, 5);
 printf("The average is: %f \n", avg);

 int *p = generateRandom();
 for (int i = 0; i < 10; i++)
 {
  printf( "*(p + %d) : %d\n", i, *(p + i));
 }

 // Pointer to an Array
 double *pp;
 double tt[50];

 pp = tt; // This stores the memory address of the first element

 // Let's test out how we can use pointer to get values at certain index in an array
 double *justP;
 double balances[5] = {1000, 10, 200, 50, 50.0};
 test(balances);

 justP = balances;

 printf("Array values using pointers");
 for (int i = 0; i < 5; i++) {
   printf("*(justP + %d): %f \n", i, *(justP + i));
 }


 printf("Array values using pointers using indexs");
 for (int i = 0; i < 5; i++) {
   printf("justP[%d]: %f \n", i, justP[i]);
 }

 printf("Array values using balances as address");
 for (int i = 0; i < 5; i++) {
   printf("*(balances + %d): %f \n", i, *(balances + i));
 }
 
 return 0;
}

double getSuperAverage(int first, int last, int data[first][last]) {
 int sum = 0;
//  for (int i = 0; i < size; i++)
//  {
//   sum += data[i];
//  }

 return sum / size;
}

double getAverage(int data[], int size) {
 int sum = 0;
 for (int i = 0; i < size; i++)
 {
  sum += data[i];
 }

 return sum / size;
}

int* generateRandom() {
 static int r [10];
 int i;
 // set the seed
 srand( (unsigned)time(NULL));

 for (i = 0; i < 10; i++) {
   r[i] = rand();
   printf( "r[%d] = %d\n", i, r[i]);
 }

 return r;
}
