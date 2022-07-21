#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------
grafo le_grafo(void) {
  return agread(stdin, NULL); 
}
//------------------------------------------------------------------------------
void destroi_grafo(grafo g) {
  agclose(g);
}
//------------------------------------------------------------------------------
grafo escreve_grafo(grafo g) {
  return agwrite(g, stdout);
}

// -----------------------------------------------------------------------------
int n_vertices(grafo g) {
  int num_v;
  vertice n;

  num_v = 0;
  for(n = agfstnode(g); n; n=agnxtnode(g, n))
    num_v++;

  return num_v;
}

// --------------------------- aresta--------------------------------------------------
int n_arestas(grafo g) {
  int cont = 0;
  Agnode_t * v;  //Declara o vértice
  
  //Itera sobre os vértices
  for (v = agfstnode(g); v; v = agnxtnode(g,v)) { 
      cont += grau(v,g);
  }

  return cont/2;
}

// -----------------------------------------------------------------------------
int grau(vertice v, grafo g) {
  // aresta-in = True && aresta-out = True para nao direcionado
  return agdegree(g, v, 1, 1);
}

// -----------------------------------------------------------------------------
int grau_maximo(grafo g)  {
  
  return 0;
}

// -----------------------------------------------------------------------------
int grau_minimo(grafo g)  {
  
  return 0;
}

// -----------------------------------------------------------------------------
int grau_medio(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int regular(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int completo(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int conexo(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int bipartido(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int n_triangulos(grafo g) {
  
  return 0;
}

// -----------------------------------------------------------------------------
int **matriz_adjacencia(grafo g) {
  
  return NULL;
}

// -----------------------------------------------------------------------------
grafo complemento(grafo g) {

  return NULL;
}

