#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[20];
  float valor;
} t_produto;
void preencher(t_produto*produto){
printf("introduza o nome do produto: ");
scanf("%s", produto->nome);
printf("introduza o valor do produto: ");
scanf("%f", &produto->valor);
  }
void salvar_produtos_txt(int n, t_produto vet_produtos[n]){
  FILE *file;
  file=fopen("nomes.txt", "w");
  if (file==NULL){
    printf ("nao foi possivel abrir o arquivo");
  }
  else{
    for(int i=0;i<n;i++){
      fprintf (file,"%s\t%.2f\n",vet_produtos[i].nome, vet_produtos[i].valor);
    }
    fclose(file);
  }
}
void ler_produtos_txt(char *caminho_do_arquivo){
   FILE *file;
  file=fopen("nomes.txt", "r");
  if (file==NULL){
    printf ("nao foi possivel abrir o arquivo");
  }
  char nome[50];
  float valor;
  while(fscanf(file,"%s%f ", nome, &valor)!=EOF){
    printf("%s %f\n", nome, valor);
  }
}
void preco_medio_txt(char *caminho_do_arquivo){
  FILE *file;
  file=fopen("nomes.txt", "r");
  if(file==NULL){
    printf("nao foi possivel abrir o arquivo");
    }
    float valor;
  float total=0;
  int N=0;
  float Media;
  char nome[50];
  while(fscanf(file,"%s%f ", nome,&valor)!=EOF){
  total+=valor;
    N+=1;
    
  }
  if(N==0)
    Media=0;
  else
    Media=total/N;
    printf("media:%f\n", Media);
}
int main(){
  int   n;
  printf("insira a quantidade de produtos \n");
  scanf("%d", &n);
  t_produto *ptr;
  ptr= (t_produto*)calloc(n,sizeof(t_produto));
  for(int i=0;i<n;i++){
    preencher(&ptr[i]);
  }
  salvar_produtos_txt(n, ptr);
  ler_produtos_txt("nomes.txt");
  preco_medio_txt("nomes.txt");
  free(ptr);
  return 0;
}
