#include <stdio.h> // preprocessor

#ifdef MAX_PROCESSOR
 #undef MAX_PROCESSOR
#endif // DEBUG
#ifndef MAX_PROCESSOR // if undefined
 #define MAX_PROCESSOR 5
#endif // !1
#if MAX_PROCESSOR == 0
 #define IS_ZERO = 1
#elif MAX_PROCESSOR == 1
 #define IS_ONE = 1
#else
 #if defined(MAX_PROCESSOR)
  #define MESSAGE "You wish"
 #else
  #define IS_NOT_ONE = 1
 #endif
#endif // 0

#define message_to(a, b) \
 printf(#a " and " #b ": We love you!\n")

#define join_token(n) printf("Token " #n " is = %d\n", token##n) // the ## means concatinating

#define MAX(x,y) ((x) > (y) ? (x) : (y))


int main(void) {
 message_to(Adams, Shuzle);
 int token32 = 5;
 join_token(32);

 printf("Message is %s \n", MESSAGE);
 printf("Max number between 13 & 5 is %d\n", MAX(13, 5));
 return 0;
}