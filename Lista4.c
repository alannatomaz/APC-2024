/*LISTA 4:
	QUESTAO 1: Crie um programa que leia do teclado seis valores inteiros e os armazene em um vetor array em C.
				Em seguida mostra na tela os valores na ordem em que foram lidos 
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int valores[6];
	int i = 0;

	for(i; i < 6; i++){
		printf("valor %d: ", i +1);
		scanf("%d", &valores[i]);
	}
	printf("Os valores lidos foram: ");
	for(i = 0; i < 6; i++){
		printf(" %d", valores[i]);
		
	}
	

}


--------------------------------------------------------------------

/*QUESTAO 2: Crie um programa que leia do teclado seis valores inteiros e em seguida, dê ao usuário a opção de exibir na tela os valores lidos na ordem de leitura ou na ordem inversa:
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int valores[6];
	int i = 0;
	int escolha_ordem;

	for(i; i < 6; i++){
		printf("valor %d: ", i +1);
		scanf("%d", &valores[i]);
	}
	
	printf("Para receber os valores na ordem em que foram inseridos digite 1, na ordem inversa digite 2: ");
	scanf("%d",&escolha_ordem);
	
	switch(escolha_ordem){
		case 1: printf("Os valores lidos foram: ");
			for(i = 0; i < 6; i++){
				printf(" %d", valores[i]);
			}
			break;
		case 2: printf("Os valores lidos, EM ORDEM INVERSA, foram: ");
			for(i = 5; i >= 0; i--){
				printf(" %d", valores[i]);
			}
			break;	
	}	
	return 0;
}
  
