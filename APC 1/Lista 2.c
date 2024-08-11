//Lista 2
//Questao 1:
QUESTAO 1: Fazer um programa para receber valores inteiros X, Y e Z do usuario e determinar se ester valores podem formar os lados de um triangulo.
			   Em caso afirmativo, informar se o triangulo e equilatero, isoceles ou escaleno. 
			   Imprima o nome do triangulo formado 
			   Imprima mensagem de erro caso nao seja possivel formar o triangulo:
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int	x;
	int y;
	int z;
	
	printf("Esse programa vai conferir a possibilidade de existencia de um triangulo a partir de valores inseridos pelo usuario.");
	
	printf("\nInsira um valor para x: ");
	scanf("%d", &x);
	
	printf("Insira um valor para y: ");
	scanf("%d", &y);
	
	printf("Insira um valor para z: ");
	scanf("%d", &z);
	
	
	if(x + y > z && x + z > y && z + y > x){
		printf("\nEsses valores possibilitam a formacao de um triangulo!");
		
			if(x == y & x == z){
				printf("\nNesse caso, um triangulo EQUILATERO!");
			}	
			
			else if(x != y && x != z && y != z){
				printf("\nNesse caso, um triangulo ESCALENO");
			}
			
			else if((x == y) != z || (x == z) != y || (y == z) != x){
				printf("\nNesse caso, um triangulo ISOCELES");	
			}
			
		
	}else{
		printf("\nA soma dos comprimentos dos lados nao possibilita a existencia de um triagulo!");
	}
	

return 0;	
}

//Questão 2:

QUESTAO 2: Fazer um programa que recebe um simbolo de operacao do usuario (+, -, * ou /) e dois numeros reais (float).
			  O programa deve retornar o resultado da operacao recebida sobre estes dois numeros.
			  Imprima a operacao selecionada pelo ususario
			  Imprima o numero calculado:
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	char operacao;
	float a;
	float b;
	
	printf("Digite um simbolo de operacao: +, -, / ou *:\n");
	scanf("%c", &operacao);
	 
	printf("Digite dois numeros reais:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	switch (operacao) {
		case '+': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a+b); 
				break;
		case '-': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a-b); 
				break;
		case '/': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a/b); 
				break;
		case '*': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a*b); 
				break;
	}
	
	return 0;
}

//Questao 3:
QUESTÃO 3: Escreva um programa que receba a velocidade com que um motorista estava dirigindo em uma avenida. 
              Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5.00 por cada km/h que estiver acima da vel. permitida
              Se a velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa. 
              A velocidade máxima permitida é de 60 km/h
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	float velocidade_maxima_permitida = 60.0;
	float velocidade_motorista = 0.0;
	float valor_multa = 0.0;
 
	printf("Insira a velocidade que o motorista estava dirigindo: ");
	scanf("%f", &velocidade_motorista);
		
	if(velocidade_motorista > velocidade_maxima_permitida){
		printf("\nO motorista estava dirigindo ACIMA da velocidade permitida!");
			
		valor_multa = (velocidade_motorista - velocidade_maxima_permitida) * 5;
			
		printf("\nNessa velocidade o valor total da multa fica em: R$%.1lf ", valor_multa);
	}else{
		printf("O motorista estava dirigindo em uma velocidade PERMITIDA! \nNao se aplica multa.");
	}
	 	
 	
	return 0;
}

//QUESTAO 4:

4: Fazer um programa para mostrar os 15 primeiros termos da serie de fibonacci
				Imprima os numeros encontrados: 
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	int contador;
	int termo;
	int pre_termo_1 = 1;
	int pre_termo_2 = 1;
	
	printf("Primeiros termos da sequencia de FIBONACCI:\n");
	
	for(contador = 1; contador <= 15; contador++){
		
		if(contador == 1 || contador == 2){
			termo = 1;
			
			printf("%d\n", termo);
		}else{
			termo = pre_termo_1 + pre_termo_2;
			pre_termo_2 = pre_termo_1;
			pre_termo_1 = termo;
			
			printf("%d\n", termo);
		}
	}
	
	return 0;
}

//QUESTAO 5:
Fazer um programa para calcular os numeros primos existentes entre os valores 0 a 50. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int j;
	int contador = 0;
	
	for(i = 0; i < 51; i++){
		contador = 0;
		for(j = i; j > 0; j--){
			if(i % j == 0){
				contador++;
			}
		}
		if(contador == 2){
			printf("\n%d", i);
		}
	}
	return 0;
}



