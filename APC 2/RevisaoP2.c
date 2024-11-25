/*
REVISÃO
------FUNÇÕES E PROCEDIMENTOS
  *Função: mapeia um conjunto de entradas(parametros) em uma só saida (retunr)
  *Procedimento: É uma rotina a ser executada mas sem valor de retorno.

EXERCICIOS:
Considere que você deseja obter as horas, sendo que sua entrada é em segundos: 

1) resolver escrevendo um procedimento */
#include <stdlib.h>
#include <stdio.h>

void segundos_horas(int seg){
  printf("%d segundo(s) equivalem a %d hora(s)", seg, seg/3600);   
}

int main(){
  segundos_horas (18000);

  return 0;
}

/*2) Resolver escrevendo uma função:



*/////////////versao profesor (PROCEDIMENTO)
void converter_em_horas(int seg){
  if(seg<0) return;
  float horas = seg/(60*2);
  printf("As horas sao: %f\n", horas);
}

////////////versao professor (FUNCAO)
float converter_em_horas(int seg){
  if(seg<0)return -1;
  retrurn seg/(60*2);
}


/*
3)Toda função é um, procedimento? FALSO
    procedimento é uma especialidade de função, nem toda função é procedimento mas todo procedimento é uma função. Procedimentos são funções que não retornam valor.

4)Todo procedimento é uma função? VREDADEIRO

5)Procedimentos não podem ter return, pois não retornam valor? FALSO



-----------PASSAGEM DE PARAMETROS
  POR VALOR: Parametros de uma funçao recebem a copia do valor da variavel passada(parametros possuem endereço de memoria proprios)
  POR REFERENCIA: Paramêtros de uma função recebem uma referencia de variavel passada (parametros não possuem endereços de meória próprios)

EXERCÍCIOS: 
1) Existe passagem de paramêtros por referência em C? FALSO
    "Não existe passagem de parâmetros por referência em C, apenas passagem de parâmetros por VALOR."
    
2) Considere que você queira dobrar o valor de um inteiro utilizando função. Construa a função utilizando:

a) Passagem de parâmetro por VALOR*/
int dobro_valor(int n){
  return n*2;
}
int main(){
  int x = 5;
  x = dobro_valor(x);
}

/*b) Passagem de paramêtro por REFERÊNCIA(c++)*/ 
void dobro_ref(int &n){
  n = n*2;
}
int main(){
  dobro_ref(x);
}

/*c) Como faria o item b) se fosse em C?*/
void dobro_ponteiro(int *){
  *n = *n*2;
}
int main(){
  dobro_ponteiro(&x);
  retrurn 0;
}

/*3) Vetores, matrizes ou strings, passados como parâmetros de uma função, ao modificarmos estes parâmetros dentro da função, não modificamos as variáveis fora da função 


-----------RECURSIVIDADE
RECURSÃO:
  *DEFINIÇÃO:
  *VANTAGENS:
  *DESVANTAGENS:

ITERAÇÃO:
  *DEFINIÇÃO:
  *VANTAGENS:
  *DESVANTAGENS:

EXERCICIOS:
1)Considere a sequência: 2, 4, 8, 16, 32, 64,... Escreva um algoritmo:
  a) Recursivo:

#include <stdlib.h>
#include <stdio.h>

int sequencia(int n){
    if(n == 1){
        printf("2 ");
    return 2;
    }
    if(n > 1){
        int z = sequencia(n - 1)*2;
        printf("%d ", z);
        return z;
    }
}
int main(){
  sequencia(6);
  return 0;
}


  b) Iterativo: 

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n = 6;
    int resultado = 2;
  for(int i = 1; i <= n; i++){
      if (i == 1) printf("2 ");
      else {
          resultado = resultado * 2;
          printf("%d ", resultado);  
      }
  }
  return 0;
}
  c) Em un único return:
*/
