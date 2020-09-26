#include <stdio.h>
#include "./temp_handler.c"
// #include "./mass_handler.c"
#include "./volume_handler.c"

void render_menu(int selection);
void volume_handler();
void mass_handler();
typedef unsigned int UNSIGN;

int main() {
 UNSIGN selected;

 printf("Welcome, to my Converter Program\n");
 while (1) {
  printf("Choose an action \n");
  printf("[1] Temperature converter (C-F) \n");
  printf("[2] Temperature converter (F-C) \n");
  printf("[3] Volume calculator \n");
  // printf("[4] Mass calculator \n");
  scanf("%d", &selected);
  render_menu(selected);
 }
}

void render_menu(int selection) {
 switch (selection)
 {
 case 1:
  temp_handler('c');
  break;
 case 2:
  temp_handler('f');
  break;
 case 3:
  volume_handler();
  break;
 // case 4:
 //  mass_handler();
 //  break;
 default:
  printf("Invalid action \n");
  break;
 }
}