#include <stdio.h>

struct Pessoa {
  char nome[100];
  int idade;
  char genero; // M, F
};

int main() {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  // struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);


  // Obtenha do console o nome, a idade e o genero da peessoa 2
  // Em seguida exiba estes dados de volta para o console

  struct Pessoa pessoa2;

  printf("\nEntre com NOME: ");
  scanf("%s", &pessoa2.nome);

  printf("Entre com IDADE: ");
  scanf("%d", &pessoa2.idade);

  printf("Entre com GENERO: ");
  scanf(" %c", &pessoa2.genero);

  printf("\nNome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);


  return 0;
}
