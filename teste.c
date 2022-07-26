#include <stdio.h>
#include "grafo.h"

//------------------------------------------------------------------------------
// print grafo com $ dot -Tpng filename.dot -o grafo.png
int main(void) {

  int anv,ana,agmax,agmin,agmed,ar,acn,acp,abi,ant;
  int bnv,bna,bgmax,bgmin,bgmed,br,bcn,bcp,bbi,bnt;
  int cnv,cna,cgmax,cgmin,cgmed,cr,ccn,ccp,cbi,cnt;
  int dnv,dna,dgmax,dgmin,dgmed,dr,dcn,dcp,dbi,dnt;
  int env,ena,egmax,egmin,egmed,er,ecn,ecp,ebi,ent;

  Agraph_t *a = agread(fopen("grafos_exemplo/cidades.dot", "r"), NULL);
  Agraph_t *b = agread(fopen("grafos_exemplo/goldner-harary.dot", "r"), NULL);
  Agraph_t *c = agread(fopen("grafos_exemplo/heawood.dot", "r"), NULL);
  Agraph_t *d = agread(fopen("grafos_exemplo/paises.dot", "r"), NULL);
  Agraph_t *e = agread(fopen("grafos_exemplo/petersen.dot", "r"), NULL);

  anv = n_vertices(a);ana = n_arestas(a);agmax = grau_maximo(a);agmin = grau_minimo(a);agmed = grau_medio(a);ar = regular(a);acn = completo(a);acp = conexo(a);abi = bipartido(a);ant = n_triangulos(a);
  bnv = n_vertices(b);bna = n_arestas(b);bgmax = grau_maximo(b);bgmin = grau_minimo(b);bgmed = grau_medio(b);br = regular(b);bcn = completo(b);bcp = conexo(b);bbi = bipartido(b);bnt = n_triangulos(b);
  cnv = n_vertices(c);cna = n_arestas(c);cgmax = grau_maximo(c);cgmin = grau_minimo(c);cgmed = grau_medio(c);cr = regular(c);ccn = completo(c);ccp = conexo(c);cbi = bipartido(c);cnt = n_triangulos(c);
  dnv = n_vertices(d);dna = n_arestas(d);dgmax = grau_maximo(d);dgmin = grau_minimo(d);dgmed = grau_medio(d);dr = regular(d);dcn = completo(d);dcp = conexo(d);dbi = bipartido(d);dnt = n_triangulos(d);
  env = n_vertices(e);ena = n_arestas(e);egmax = grau_maximo(e);egmin = grau_minimo(e);egmed = grau_medio(e);er = regular(e);ecn = completo(e);ecp = conexo(e);ebi = bipartido(e);ent = n_triangulos(e);

  printf("            | cidades\t| goldner\t| heawood\t| paises\t| petersen\n");
  printf("n vertices  | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", anv    ,bnv    , cnv    , dnv    , env   );
  printf("n arestas   | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", ana    ,bna    , cna    , dna    , ena   );
  printf("grau maximo | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", agmax  ,bgmax  , cgmax  , dgmax  , egmax );
  printf("grau minimo | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", agmin  ,bgmin  , cgmin  , dgmin  , egmin );
  printf("grau medio  | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", agmed  ,bgmed  , cgmed  , dgmed  , egmed );
  printf("regular     | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", ar     ,br     , cr     , dr     , er    );
  printf("completo    | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", acn    ,bcn    , ccn    , dcn    , ecn   );
  printf("conexo      | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", acp    ,bcp    , ccp    , dcp    , ecp   );
  printf("bipartido   | %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", abi    ,bbi    , cbi    , dbi    , ebi   );
  printf("n triangulos| %d \t| %d \t\t| %d \t\t| %d \t\t| %d\n", ant    ,bnt    , cnt    , dnt    , ent   );

  destroi_grafo(a);
  destroi_grafo(b);
  destroi_grafo(c);
  destroi_grafo(d);
  destroi_grafo(e);
  return 0;
}
