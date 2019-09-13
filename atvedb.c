#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct {
    char matricula[10];
    char nome[40];
    double nota1;
    double nota2;
    double nota3;
    double media;
    int indice;
}Aluno;


void Adicionar(Aluno p[]){
    int i = 0;
    int cont = 0;

    do{
        if(p[i].indice == 0){
            printf("Escreva a matricula do aluno : ");
            scanf("%s", p[i].matricula);
            printf("Escreva o nome do aluno : ");
            scanf("%s", p[i].nome);
            printf("Escreva a nota 1: ");
            scanf("%lf", &p[i].nota1);
            printf("Escreva a nota 2: ");
            scanf("%lf", &p[i].nota2);
            printf("Escreva a nota 3: ");
            scanf("%lf", &p[i].nota3);
            (p[i].media = (p[i].nota1 + p[i].nota2 + p[i].nota3)/3);
            p[i].indice++;
            cont++;
        }else{
            i++;
        }
    }while(cont == 0);

    printf("\n\n Registro %d adicionado \n", i+1);

}

void Exibir(Aluno p[]){
    int i = 0;
    int cont = 0;

do{
    if (p[i].indice == 1){
        printf("\n     ------Registro %d------", i+1);
        printf("\nMatricula : %s", p[i].matricula);
        printf("\nNome : %s", p[i].nome);
        printf("\nNota 1 : %lf", p[i].nota1);
        printf("\nNota 2 : %lf", p[i].nota2);
        printf("\nNota 3 : %lf", p[i].nota3);
        printf("\nMedia : %lf", p[i].media);

        printf("\n");
        i++;
    }else if(i == 0){
        printf("Nao ha alunos registrados!");
        cont++;
    }else{
        cont++;
    }
    }while (cont == 0);
}
void ExibirMaior(Aluno p[], int res){
    int i = 0;
    int cont = 0;


        printf("\nMatricula : %s", p[res].matricula);
        printf("\nNome : %s", p[res].nome);
        printf("\nNota 1 : %lf", p[res].nota1);
        printf("\nNota 2 : %lf", p[res].nota2);
        printf("\nNota 3 : %lf", p[res].nota3);
        printf("\nMedia : %lf", p[res].media);

        printf("\n");

}

int acharMaior(Aluno p[]){
   int i, maior = 0, cont = 0;


   for(i=0; i < 5; i++){
      if (p[i].media > maior){
         maior = p[i].media;
         cont = i;
      }
   }

   return cont;
}

int main() {

    int op, k;
    Aluno p[5];
    for (k = 0; k < 5; k++){
        p[k].indice = 0;
    }

do {
    system("cls");
    printf("\n\n 1 - Exibir registro");
    printf("\n 2 - Adicionar registro");
    printf("\n 2 - Exibir aluno com maior media");
    printf("\n 4 - Sair");

    printf("\n\n Digite a opcao : ");
    scanf("%d", &op);

    switch(op) {
    case 1:
        system("cls");
        Exibir(p);
        getch();
    break;

    case 2:
        system("cls");
        Adicionar(p);
        getch();
    break;

    case 3:
        system("cls");
        int res = acharMaior(p);
        ExibirMaior(p,res);
        getch();

    break;

    case 4:
    exit(0);
           }
    } while (1);
}
