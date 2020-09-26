#include <stdio.h>
#include <time.h>

void f() 
{
   static int i = 3;
   
   printf("%d ", i);
   if(--i) f();
}

int main() {
 printf("PRocessor clock speed is %d \n", CLOCKS_PER_SEC);
 f();
 return 0;
}