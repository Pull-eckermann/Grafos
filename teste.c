#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------
// print grafo com $ dot -Tpng filename.dot -o grafo.png
int main(void) {

  Agraph_t *g = le_grafo();

  printf("\ncomponentes: %d\n", conexo(g));

  destroi_grafo(g);
  return 0;
}
