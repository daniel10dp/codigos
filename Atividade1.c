#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ordenar_troca(int v[]) {
    int i, j;
    for(i=1; i<1000; i++) {
            for(j=0; j<1000-i; j++) {
                if( v[j]>v[j+1] ) {
                    int x = v[j];
                    v[j] = v[j+1];
                    v[j+1] = x;
                }
            }
    }
}

int minimo(int v[], int i) {
    int j, k=i;
    for(j=i+1; j<1000; j++)
        if( v[k]>v[j] ) k=j;
        return k; }

void ordenar_selecao(int v[]) {
    int i, k, x;
    for(i=0; i<1000-1; i++) {
            k = minimo(v,i);
            x = v[i];
            v[i] = v[k];
            v[k] = x;
    }
}

int main(){

int i, v[1000];

  printf("Gerando um vetor com 1000 valores aleatorios:\n\n");

  for (i = 0; i < 1000; i++)
  {
    v[i] = (rand() % 1000);
    printf("%d\n",v[i]);
  }

   printf("Ordenando por trocas:\n\n");

    clock_t Ticks[2];
    Ticks[0] = clock();
    ordenar_troca(v);
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;

    for (i = 0; i < 1000; i++)
  {
    printf("%d\n",v[i]);
  }
   printf("Ordenando por selecao:\n\n");
    clock_t Ticks2[2];
    Ticks2[0] = clock();
    ordenar_selecao(v);
    Ticks2[1] = clock();
    double Tempo2 = (Ticks2[1] - Ticks2[0]) * 1000.0 / CLOCKS_PER_SEC;

    for (i = 0; i < 1000; i++)
  {
    printf("%d\n",v[i]);
  }
printf("Tempo gasto da ordenacao por trocas: %g ms.\n\n", Tempo);
printf("Tempo gasto da ordenacao por selecao: %g ms.\n\n", Tempo2);

  return 0;

}
