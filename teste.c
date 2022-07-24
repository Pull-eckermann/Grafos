#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

  Agraph_t *g = le_grafo();

  //escreve_grafo(g);
  int **ma = matriz_adjacencia(g);
  if(!ma)
    return 0;
  
  // matriz de G
  printf("MA:\n");
  int size = n_vertices(g);
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      printf("%d ", ma[i][j]);
    }
    printf("\n");
  }

  // matriz de complemento de G
  printf("MC:\n");
  grafo c = complemento(g);
  int **mc = matriz_adjacencia(g);
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      printf("%d ", mc[i][j]);
    }
    printf("\n");
  }

  // soma matriz de G com matriz complemento de G
  printf("SOMA: \n");
  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      printf("%d ", mc[i][j] + ma[i][j]);
    }
    printf("\n");
  }

  destroi_grafo(g);
  free(ma);
  free(mc);

  return 0;
}
