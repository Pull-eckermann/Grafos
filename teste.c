#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

  grafo g = le_grafo();

  printf("Numero de triangulos: %d\n", n_triangulos(g));

  destroi_grafo(g);

  return 0;
}
