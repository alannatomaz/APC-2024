//CABECALHO
//Autor: Alanna Tomaz de Aquino Martins 
//Matricula: 2412130055
//Objetivo: Emprestimo de livros da biblioteca
//Data: 26/04/2024



//QUESTÃO 1: Receba do usuário via console uma sequência de números inteiros até que 3 números pares sejam lidos.
//          -Imprima quantas vezes o laço precisou ser repetido.
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int numero_usuario = 0;
    int numeros_pares = 0;
    int quantidade_repeticoes = 0;
    
    printf("Insira uma sequencia de numeros inteiros: ");
        
    while(numeros_pares < 3){
        scanf("%d", &numero_usuario);
    
        if(numero_usuario % 2 == 0){
            numeros_pares++;
        }
    
        quantidade_repeticoes++;    
    }
    
    printf("O loop se repetiu %d vezes ate ler 3 numeros pares. \n", quantidade_repeticoes);
    return 0;
} 

-----------------------------------------------------------------------------------
//QUESTAO 2: Receba do usuário via console uma sequencia de números inteiros até que 5 números ímpares sejam lidos.
//          -Imprima o primeiro número ímpar lido.
//          -Imprima o último número ímpar lido.
//          -Imprima quantas vezes o laço precisou ser repetido.    

#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero_usuario = 0;
	int numeros_impares = 0;
	int quantidade_repeticoes = 0;
	int primeiro_impar = 0;
	int ultimo_impar = 0;
	
	printf("Insira uma sequencia de numeros inteiros:\n");
	
	while(numeros_impares < 5){
				scanf("%d", &numero_usuario);
				quantidade_repeticoes++;
		
		if(numero_usuario %2 == 1){
			numeros_impares++;
			
			if(numeros_impares == 1){
				primeiro_impar = numero_usuario;
			}
			ultimo_impar = numero_usuario;
		}
				
	}
	
	printf("\n-O primeiro numero impar lido foi: %d", primeiro_impar);
	printf("\n-O ultimo numero impar lido foi: %d", ultimo_impar);
	printf("\n-O loop precisou ser repetido %dx ate que tivesse 5 numeros impares.", quantidade_repeticoes);
	
	
	return 0;	
	
}
    
---------------------------------------------------------------------------------------------

//QUESTAO 3: Receba do usuário via console as variáveis m,x e n do tipo float e calcule o valor de y:
//          -Equaçao reduzida da reta é y: mx + n

#include <stdio.h>
#include <stdlib.h>

int main (){
	float m;
	float x;
	float n;
	float y;
	
	
	printf("Digite um valor para o coeficiente ANGULAR m: ");
	scanf("%f", &m);

	printf("Digite um valor para o coeficiente LINEAR n: ");
	scanf("%f", &n);
	
	printf("Digite um valor para a variavel x: ");
	scanf("%f", &x);	
	
	y = m * x + n;
	
	printf("\nNesse caso o valor de y fica: %.1f", y);
	
	
	return 0;
}

--------------------------------------------------------------------------------------------
    
//QUESTÃO 4: Receba do usuário via console dez números inteiros e ache qual o menor e o maior número informado.
//          -Imprima o maior número encontrado.
//          -Imprima o menor número encontrado.

#include <stdio.h>
#include <stdlib.h>  

int main (){
	int maior_numero;
	int menor_numero;
	int numero_usuario;
	int contador;
	
	printf("Digite 10 numeros inteiros e o algoritmo dara o menor e o maior:\n");
		
	while (contador < 10){
		scanf("%d", &numero_usuario);
		contador++;
		
		if(contador == 1){
			menor_numero = numero_usuario;
			maior_numero = numero_usuario;
		}
		
		if(numero_usuario <= menor_numero){
			menor_numero = numero_usuario;
		}
		
		if(numero_usuario >= maior_numero){
			maior_numero = numero_usuario;
		}
	}
	
	
	printf("\nO menor numero inserido foi: %d", menor_numero);
	printf("\nO maior numero inserido foi: %d", maior_numero);
	return 0;
}
	
	
------------------------------------------------------------------------------

//QUESTÃO 5: 

#include <stdio.h>
#include <stdlib.h>

int main (){
	int contador = 1;
	int quantidade_bois_aptos = 0;
	float peso_boi_usuario;
	float receita;
	float peso_boi_apto_1;
	float peso_boi_apto_2;
			
	printf("Insira o peso de cada um dos 5 bois:\n");
	
	for(contador; contador < 6; contador++){
		scanf("%f", &peso_boi_usuario);
		
		if(peso_boi_usuario >= 600){
			quantidade_bois_aptos++;
			if(quantidade_bois_aptos == 1){
				peso_boi_apto_1 = peso_boi_usuario;
			}
			
			if(quantidade_bois_aptos == 2){
				peso_boi_apto_2 = peso_boi_usuario;
			}
		}
		
		if(contador == 5) {
			if(quantidade_bois_aptos < 2){
				printf("O processo nao teve sucesso!");
			}else{
				receita = ((peso_boi_apto_1 / 15) * 232.6 ) + ((peso_boi_apto_2 / 15) * 232.6);
				
				printf("O valor da receita: %.1lf\n", receita);
				printf("Foram pesados %d bois", contador);
			}
		}
	}
	
	
	
	
	return 0;
}
 
	
