#include <stdio.h>
#include <stdlib.h>

void troca(int a[], int i, int j) {
  int aux;
  aux = a[i];
  a[i] = a[j];
  a[j] = aux;
}

int particiona(int a[], int inicio, int fim) {
  int posPivo, k, i;

  posPivo = a[fim]; // Posição do Pivo (ultimo)
  k = inicio;       // Indice do Pivo (atual)

  for (i = inicio; i < fim; i++) {
    if (a[i] <= posPivo) {
      troca(a, i, k);
      k++;
    }
  }

  if (a[k] > posPivo) {
    troca(a, k, fim);
  }
  return k;
}

void quickSort(int a[], int inicio, int fim){
  if(inicio < fim){
    int posPivo = particiona(a, inicio, fim);
    quickSort(a, inicio, posPivo - 1);
    quickSort(a, posPivo + 1, fim);
  }
}

int main(void) {
  int a[] = {20,35,60,55,68,2,5,7,900,98,1000}, i;
  int tam =  sizeof(a) / sizeof(int);

  quickSort(a, 0, tam - 1);
  
  for(i = 0; i < tam; i++){
    printf("%d ", a[i]);
  }
  return 0;
}