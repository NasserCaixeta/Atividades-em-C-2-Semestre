#include <stdio.h>
#include <string.h>
struct data{
int dia;
int mes;
int ano;  


  
} data;
typedef struct data t_data;
struct turma{
char nome [40];
char codigo[15];
float numero_alunos;
t_data data_inicio;
char sala[15];
}turma;
typedef struct turma t_turma; 


int main(){ 
struct turma;  
int *ptr_sala;
printf("%s", "digite seu nome: ");
scanf("%s\n", turma.nome);
printf("%s", "digite seu código: ");  
scanf("%s\n", turma.codigo);
printf("%s", "digite o número de alunos: ");
scanf("%f\n", turma.numero_alunos);
printf("%s", "digite a data: ");
scanf("%u\n", turma.data_inicio);
printf("%s", "digite a sala: ");
scanf("%s\n", turma.sala);

t_turma *ptr_turma;   
t_turma apc_ii;
while (turma.numero_alunos == '\0'){
if (turma.numero_alunos > 40){
Strcpy(turma.sala, "JA4/3");
}  
if (turma.numero_alunos < 40){
Strcmpy(turma.sala, "JA1");
}
if (turma.numero_alunos < 10){
strcmpy(turma.sala, "Não Definido") ;
}
  
  }
return 0;
}
