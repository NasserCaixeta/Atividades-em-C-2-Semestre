#include <stdio.h>
int main(){
// a) crie uma estrutara pet com os seguintes atributos:
  //nome,idade,sexo,raça
  //b_ soilcite ao usuario para inserir os dados do pet
  struct pet {
 char nome[20];
  int idade;
  char raca[15];
  char sexo;


  
  } pet;
  printf ("%s", "escreva o nome: ");
  scanf ("%s\n", pet.nome);
  printf ("%s", "escreva a idade: ");
  scanf ("%u\n", &pet.idade);
  printf ("%s", "escreva a raça: ");
  scanf ("%s\n", pet.raca);
  printf ("%s", "escreva o sexo: ");
  scanf ("%c\n", &pet.sexo);
  
  printf("%s\n", pet.nome);
  printf("%u\n", pet.idade);
  printf("%s\n", pet.raca);
  printf("%c\n", pet.sexo);
  




  return 0;
}
