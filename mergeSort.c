#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4

void intercala(int a[], int inicio, int meio, int fim) {
  int i = inicio, j = meio + 1, k = 0, tam = fim - inicio + 1;
  int *aux;
  aux = (int *)malloc(tam * sizeof(int));

  while (i <= meio && j <= fim) {
    if (a[i] <= a[j]) {
      aux[k] = a[i];
      i++;
    } else {
      aux[k] = a[j];
      j++;
    }
    k++;
  }

  while (i <= meio) {
    aux[k] = a[i];
    k++;
    i++;
  }

  while (j <= fim) {
    aux[k] = a[j];
    k++;
    j++;
  }

  for (k = inicio; k <= fim; k++) {
    a[k] = aux[k - inicio];
  }
  free(aux);
}

void mergeSort(int a[], int inicio, int fim) {
  int meio = 0;
  if (inicio < fim) {
    meio = (fim + inicio) / 2;
    mergeSort(a, inicio, fim);
    mergeSort(a, meio + 1, fim);
    intercala(a, inicio, meio, fim);
  }
}

int main() {
  int a[TAMANHO] = {68, 9, 3, 1};

  mergeSort(a, 0, TAMANHO - 1);

  printf("\nVetor final ordenado \n");
  for (int i = 0; i < TAMANHO; i++) {
    printf("%d \t", a[i]);
  }

  printf("\n");
  return 0;
}