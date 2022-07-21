#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------

int main(void) {

  grafo g = le_grafo();

  //escreve_grafo(g);

  int n = regular(g);
  printf("%d   \n",n);

  destroi_grafo(g);

  return 0;
}
