#include <stdio.h>

void volume_handler() {
 double len;
 double width;
 double height;

 printf("Enter Length\n");
 scanf("%lf", &len);
 printf("Enter Width\n");
 scanf("%lf", &width);
 printf("Enter Height\n");
 scanf("%lf", &height);

 printf("Volume of L: %lf, W: %lf, H: %lf is %lf\n\n", len, width, height, len * width * height);
}