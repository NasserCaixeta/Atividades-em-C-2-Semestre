
#include <stdio.h>
int main(){
char s[] = "maria";
int i;
char *p; 
  p = s;
 while (*p != '\0'){
i++;
p++;  
}
printf("%d", i);


return 0;
 
}
