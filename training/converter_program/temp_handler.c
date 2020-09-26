#include <stdio.h>

typedef unsigned int UNSIGN;
void temp_handler(char _type) {
 UNSIGN value; 
 switch (_type) {
  case 'c':
   printf("Enter temperature in Celsius\n");
   scanf("%d", &value);
   printf("%d˚C to Fahrenheit is %d˚F\n\n", value, (value * 9/5) + 32);
   break;
  default:
   printf("Enter temperature in Fahrenheit\n");
   scanf("%d", &value);
   printf("%d˚F to Celsius is %d˚C\n\n", value, (value - 32) * 5/9);
   break;
 }
}