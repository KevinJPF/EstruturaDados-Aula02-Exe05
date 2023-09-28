#include "pilhachar.h" // pilha de char *
#include <stdio.h>

//O programa não retorna valor pois a pilha P espera receber dados do tipo Itemp que está definido como char, porém o programa está passando um array de caracteres(char[11]), o que faz com que a pilha não armazene os caracteres pelo tipo incompatível.

int main(void) {
  Pilha P = pilha(5);
  char s[11];

  for (int i = 1; i <= 3; i++) {
    printf("? ");
    fgets(s, sizeof(s), stdin);
    empilha(s, P);
  }

  while (!vaziap(P))
    puts(desempilha(P));

  return 0;
}
