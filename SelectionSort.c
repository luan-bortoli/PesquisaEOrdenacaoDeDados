#include <stdio.h>

#define TAMANHO 5

int main() {
  int vS[TAMANHO], i, j, menor, troca, aux;
  // Inserir os elementos
  printf("Digite os %d elementos: \n", TAMANHO);
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vS[i]);
  }
  // Vetor Inserido
  printf("\nVetor inicial \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vS[i]);
  }
  printf("\n");
  // Selection Sort
  for (i = 0; i < TAMANHO - 1; i++) {
    menor = i;
    aux = i + 1;
    for (j = aux; j < TAMANHO; j++) {
      if (vS[j] < vS[menor]) {
        menor = j;
      }
    }
    if (i != menor) {
      troca = vS[i];
      vS[i] = vS[menor];
      vS[menor] = troca;
    }
  }
  // Imprime os elementos ordenados
  printf("\nVetor final ordenado \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vS[i]);
  }
  return 0;
}