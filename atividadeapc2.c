#include <stdio.h>

int main() {
  char s[] = "OlaOleOli";
  char *ptr = s;
  int i;
  for (i=0;s[i]!='\0';i++){
    
printf("%d\n", &s[i]);
    
    }
  printf("%s", "a = ");
  printf("%d\n", ptr+2);
  printf("%s", "e = ");
  printf("%d\n", ptr+5);
  printf("%s", "i = ");
  printf("%d\n", ptr+8);
  
  return 0;
  
}
