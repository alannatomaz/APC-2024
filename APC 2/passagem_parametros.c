#include <stdio.h>
// passagem de parâmetros por valor (copia)
void muda_variavel_val(int n, int valor) {
  n = valor;
    printf("n: %d\n", n);
}
// passagem de parâmetros por "ref" com ponteiros
void muda_variavel_ref_ponteiro(int *n, int valor) {
  *n = valor;
}

int main() {
  int x = 5;
    muda_variavel_val(x, 3);
  printf("x: %d\n", x);
  muda_variavel_ref_ponteiro(&x, 9);
  printf("x: %d\n", x);
  return 0;
}

///////////////////
#include <stdio.h>
void preencheVetor(int n, int vetor []) {
  int i;
  for(i = 0; i < 5; i++) { // leitura
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }
}

void imprimeVetor(int n, int vetor []) {
  int i;
  for(i = 0; i < 5; i++) // escrita
    printf("vetor[%d]: %d\n", i, vetor[i]);
}

int main() {
  int vetor [5]; // elementos inicializados com lixo de memória.
  printf("Armazena valores no vetor:\n");
  preencheVetor (5, vetor);
  printf("Imprime valores do vetor:\n");
  imprimeVetor (5, vetor);

  return 0;
}


/////////////////////////RECURDIVIDADE
#include <stdio.h>

int p(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;   
    else return p(n-1) + p(n-2);
} 

int main(){
    printf("%d", p(6));


}