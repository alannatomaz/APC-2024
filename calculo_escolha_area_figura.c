//CABECALHO
//Autor: Alanna Tomaz de Aquino Martins 
//Matricula: 2412130055
//Objetivo: Emprestimo de livros da biblioteca
//Data: 16/04/2024

#include <stdio.h>
#include <stdlib.h>

	int main(void){
		int numero_livros;
		
		int codigo_livro_1 = 0;
		int codigo_livro_2 = 0;
		int codigo_livro_3 = 0;
		
		int livro_1 = 01;
		int livro_2 = 02;
		int livro_3 = 03;
		
		
	printf("Voce pretende pegar 1, 2 ou 3 livros emprestados?: ");
	scanf("%d", &numero_livros);
	
	if(numero_livros == 1){
		printf("\nInsira o codigo do livro a ser buscado: ");
		scanf("%d", &codigo_livro_1);
		
		    if(codigo_livro_1 == livro_1||codigo_livro_1 == livro_2 ||codigo_livro_1 == livro_3){
				printf("O livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 1 ");
		
		    }else{
		    printf("O livro nao foi encontrado");
			}
		
	}
	
		
	else if(numero_livros == 2){
		printf("\nInsira o primeiro codigo de livro a ser buscado: ");
		scanf("%d", &codigo_livro_1);
		
			if(codigo_livro_1 == livro_1||codigo_livro_1 == livro_2 ||codigo_livro_1 == livro_3){
				printf("\nO livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 1 ");
			}else{
				printf("\nO livro nao foi encontrado");
			}
			
			printf("\n>>Insira o segundo codigo de livro a ser buscado: ");
			scanf("%d", &codigo_livro_2);
		
			if(codigo_livro_2 == livro_1||codigo_livro_2 == livro_2 ||codigo_livro_2 == livro_3){
				printf("\nO livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 2 ");
			}else{
				printf("\nO livro nao foi encontrado");
			}
	}
	
				
		
	else if(numero_livros == 3){
		printf("\nInsira o primeiro codigo de livro a ser buscado: ");
		scanf("%d", &codigo_livro_1);
		
			if(codigo_livro_1 == livro_1||codigo_livro_1 == livro_2 ||codigo_livro_1 == livro_3){
			
				printf("O livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 1 ");
			}else{
				printf("O livro nao foi encontrado");
			}
			
		printf("\n>>Insira o segundo codigo de livro a ser buscado: ");
		scanf("%d", &codigo_livro_2);
		
			if(codigo_livro_2 == livro_1||codigo_livro_2 == livro_2 ||codigo_livro_2 == livro_3){
				printf("O livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 2 ");
			}else{
				printf("O livro nao foi encontrado");
			}	
		
		printf("\n>>Insira o terceiro codigo de livro a ser buscado: ");
		scanf("%d", &codigo_livro_3);
			
			if(codigo_livro_3 == livro_1||codigo_livro_3 == livro_2 ||codigo_livro_3 == livro_3){
				printf("O livro foi achado com sucesso!");
				printf("\nEle se encontra na ESTANTE 1, PRATELEIRA 3 ");
			}else{
				printf("O livro nao foi encontrado");
			}
	}

	return 0;	
	}
