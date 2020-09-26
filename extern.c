#include <stdio.h>

extern int count; // throws a warning if initialize. So don't
void global_func() {
  printf("Count is %d\n", count);
}
