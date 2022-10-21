#include <stdio.h>
void soma(){
  int n1,n2,soma,dobro1,dobro2;
printf("Imprima dois números: ");
scanf("%d",&n1);
scanf("%d",&n2);
soma = n1 + n2;
 dobro1 = n1 * 2;
 dobro2 = n2 * 2; 
  printf("%d\n",soma);
  printf("%d\n",dobro1);
  printf("%d\n",dobro2);
}
int main () {
soma ();
  return 0;
}

