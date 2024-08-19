#include<stdlib.h>
#include<stdio.h>


int main() {

  //Acessar posições do vetor usando notação de vetor e notação de ponteiro
 int vet[10] = {3, 5, 6, 2, 8, 9, 1, 5, 0, 7}; 


  printf("Representacao de vetor: \n");
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[0], vet[0]);
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[1], vet[1]);
  printf("&vet[0]: %p, vet[0]: %d\n", &vet[2], vet[2]);

  printf("\nRepresentacao de ponteiro: \n");
  printf("vet: %p, *vet: %d\n", vet, *vet);//vet[0]
  printf("vet+1: %p, *vet+1: %d\n", vet, *(vet+1));//vet[1]
  printf("vet: %p, *vet+2: %d\n", vet, *(vet+2));//vet[2]

  int *p = vet; // p = &vet[0] --- A partir da posicao [0] do vetor 
  printf("\n\nRepresentação de vetor (com ponteiro p): \n");
  printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
  printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
  printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);

  printf("\nRepresentação de ponteiro (com ponteiro p):\n");
  printf("p: %p, *p: %d\n", p, *p); // vet[0]
  printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); // vet[1]
  printf("p+2: %p, *(p+2): %d\n", p+2, *(p+2)); // vet[2]


  int *p2 = &vet[5]; //A partir da posicao [5] do vetor
  printf("\n\nRepresentação de vetor (com ponteiro p2): \n");
  printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);// vet[5]
  printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);// vet[6]
  printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);// vet[7]

  printf("&p2[-1]: %p, p2[-1]: %d\n", &p2[-1], p2[-1]);// vet[4]


  printf("\nRepresentação de ponteiro (com ponteiro p2):\n");
  printf("p2: %p, *p: %d\n", p2, *p2);// vet[5]
  printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));// vet[6]
  printf("p2+2: %p, *(p2+2): %d\n", p2+2, *(p2+2));// vet[7]

  printf("p2-1: %p, *(p2-1): %d\n", p2-1, *(p2-1));// vet[4]



  //Acessar o inteiro com o ponteiro com a notação de vetor, mesmo não tenndo criado um vetor?
  printf("\n\nAcessar o inteiro com o ponteiro com a notação de vetor, mesmo não tendo criado um vetor?\n");
  int n = 5;
  int *pn = &n;

  printf("Representacao de ponteiro:\n");
  printf("pn: %p (&n), *pn: %d (n)\n", pn, *pn);

  printf("\nRepresentacao de vetor: \n");
  printf("&pn[0]: %p, pn[0]: %d\n", &pn[0], pn[0]);


  //Percorrer MATRIZ usando linhas e colunas:
   printf("\n\nPercorrer MATRIZ usando linhas e colunas: \n");

  /*
  int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      printf("num[%d][%d]: %d\n", i, j, num[i][j]);
    }
  }

  for(int j = 0; j < 4; j++) {
    printf("num[1][%d]: %d\n", j, num[1][j]);
  }
  for(int j = 0; j < 4; j++) {
    printf("num[2][%d]: %d\n", j, num[2][j]);
  }
*/

/*
  printf("\n\nnum[0][0]: %d\n", num[0][0]);
  printf("num[0][0]: %d\n", num[0][1]);
  printf("num[0][0]: %d\n", num[0][2]);
  printf("num[0][0]: %d\n", num[0][3]);
*/

   return 0;
}



