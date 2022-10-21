#include <stdio.h>

int main() {

char s[] = ("estou indo");
int i ;
  while (*(s + i) != '\0'){
  switch (  *(s + i)){
     case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
     case 'u':
    case 'U':
    case 'i':
      case 'I':
      
    *(s+i) = '#';

    
  }
    
  i++;
    
  }
  printf ("%s\n", s[i]);
  return 0;
}
