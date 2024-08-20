#include <stdio.h>

int main() {
  int n = 1025;
  char *p_c = (char *)&n;


  printf("\nValor do primeiro byte: %d", *p_c);
  printf("\nO endereco de memoria do primeiro byte:%p ", p_c);

  printf("\n\nValor do segundo byte: %d", *(p_c+1));
  printf("\nO endereco de memoria do segundo byte:%p ", (p_c+1));

  *(p_c+2) = 1;

  printf("\n\nvalor de n: %d", n);
  printf("\nO valor final de n foi 66561 porque alteramos o primeiro bit do terceiro byte para 1 e o valor correspondente (decimo setimo bit do inteiro, logo 2^16=65536) foi adicionado ao valor inicial de n, 1025.");


  return 0;
}
