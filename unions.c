#include <stdio.h>

union Data {
 int i;
 float f;
 char str[20];
};

int main() {
 union Data data;
 printf("Size of Data union is %lu Bytes \n", sizeof(union Data));
 return 0;
}