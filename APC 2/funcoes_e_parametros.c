#include <stdio.h>
  int abs(int n){
    if(n < 0)
        n = -n;

  return n;
  }

  int is_digit(char c){
    if(c >= 0 && c <= 9)
      return 1;

      return 0;
  }

  void exibir_horas(int milisegundos){
    horas = milisegundos * 360000;
  return;
  }

int is_not_alphabet(char c){}



int main(){
  int modulo = abs(-5);
  printf("modulo -5: %d\n", modulo);

  int digito = is_digit(5);
  printf("resultado : %d\n", digito);

  int digito2 = is_digit('*');
  printf("resultado : %d\n ", digito2);

  int conversao = exibir_horas(3600000);
  printf("Essa quantidade de milisegundos pode ser convertida em:%d\n horas", conversao);

    return 0;

}