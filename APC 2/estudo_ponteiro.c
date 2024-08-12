#include<stdlib.h>
#include<stdio.h>

int main(){
   int x = 5, y, z;
   int *ptr_x = &x;

   //printando o valor atribuido a variavel x
   //printando o endereco de x com %p ja que o endereco de memoria é um ponteiro
    printf("%d", x);
    printf("\n%p", &x);

    //printando O ponteiro, que nao deixa de ser um endereco de memoria
    //printando o endereco de memoria DO PROPRIO ponteiro
    printf("\n\n%p", ptr_x);
    printf("\n%p", &ptr_x);

    //o asterisco aqui direciona nao ao endereço do ponteiro mas funciona como um atalho, 
    //diretamente para o valor atribuido a variavel que o ponteiro aponta

    //isso aqui não precisa, mas funciona printando o endereço de memória DO PROPRIO X e não dp ponteiro,
    //ja que o asterisco forneceu o atalho diretamente ao valor do x
    printf("\n\n%d", *ptr_x);
    printf("\n%p", &*ptr_x);

  scanf("%d", ptr_x);
  //No SCANF, o que vem depois da virgula não é o nome da variável que está sendo mudada e sim ONDE ele vai salvar o que foi lido

    return 0;
}
