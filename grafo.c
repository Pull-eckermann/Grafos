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
  agwrite(g, stdout);
  return g;
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
  //Retorna a soma de todos os graus de vértices /2 = número de arestas
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
  vertice v = agfstnode(g); //Declara v e atribui um vértice qualquer a ele
  int aux = grau(v,g);      //Recebe um grau genérico para comparar
  int true;

  //Itera sobre os vértices
  for (v = agfstnode(g); v; v = agnxtnode(g,v)) { 
      if(aux == grau(v,g))
        true = 1;
      else
        true = 0;
  }
  //Será tru se todos os vértices tiverem grau == aux
  return true;  
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

