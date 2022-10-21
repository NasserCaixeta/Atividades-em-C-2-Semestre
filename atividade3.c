#include <stdio.h>
int main(){
int s[5] = {1,2,3,4,5};
int maior;
int menor;
  maior = *s;
  menor = *s;
  for (int i =1; i<6;i++){
if (maior < *(s+i))
  maior = *(s+i);
if (menor > *(s+i))
  menor = *(s+i);
}
  printf("%d\n", maior);
  printf("%d\n", menor);

  return 0;
}
