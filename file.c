#include <stdio.h>

int main() {
 char str[100], ch;
 // Take data input
 printf("Writing something \n");
 scanf("%s", str);

 // Write to file
 FILE *file = fopen("Hellos.c", "w");
 fprintf(file, "%s \n", str); // allows you write to file using format specifier
 // fscanf(file, "Ls: %s \n", str);
 fputs(str, file); // you are stuck with string only

 fclose(file);

 // Reading
 FILE *fp = fopen("Hellos.c", "r");
 ch = fgetc(fp);
 printf("%d \n", ch);
 fgets(str, 100, fp);

 printf("Get file current pointer %ld \n", ftell(fp));
 fseek(fp, 100, 3);

 fclose(fp);
 return 0;
}