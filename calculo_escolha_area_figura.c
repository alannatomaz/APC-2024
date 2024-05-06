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
    scanf("%d", &numero_usuario);
    
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
