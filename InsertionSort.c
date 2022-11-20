#include <stdio.h>

#define TAMANHO 5

int main() {
  int vI[TAMANHO], i, j, aux;
  // Inserir os elementos
  printf("Digite os %d elementos: \n", TAMANHO);
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vI[i]);
  }
  // Vetor Inserido
  printf("\nVetor inicial \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vI[i]);
  }
  printf("\n");
  
  // Insertion Sort
  for (i = 0; i < TAMANHO; i++) {
    aux = vI[i];
    j = i;
    while ((j > 0) && (aux < vI[j - 1])) {
      vI[j] = vI[j - 1];
      j = j - 1;
    }
    vI[j] = aux;
  }

  // Imprime os elementos ordenados
  printf("\nVetor final ordenado \n");
  for (i = 0; i < TAMANHO; i++) {
    printf("Posicao [%d] = %d \n", i, vI[i]);
  }
  return 0;
}