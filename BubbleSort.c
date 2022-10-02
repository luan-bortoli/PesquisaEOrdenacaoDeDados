#include <stdio.h>

// Definir o tamanho do vetor
#define TAMANHO 5

int main() {
  int vB[TAMANHO], i, j, aux;
  // Inserir elementos no vetor
  printf("Digite os números do vetor: \n");
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vB[i]);
  }
  // Vetor inserido
  printf("\nVetor inicial \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vB[i]);
  }
  printf("\n");

  // Bubble Sort
  for (i = 1; i < TAMANHO; i++) {
    for (j = 0; j < TAMANHO - 1; j++) {
      if (vB[j] > vB[j + 1]) {
        aux = vB[j];
        vB[j] = vB[j + 1];
        vB[j + 1] = aux;
      }
    }
  }
  // Imprime os elementos ordenados
  printf("\nVetor final ordenado \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vB[i]);
  }
  return 0;
}
