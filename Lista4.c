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
	return 0;
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



//QUESTAO 3:
#include <stdio.h>
#include <stdlib.h>

int main() {
    float valores[5];
    float soma = 0.0;
    float media;
    int i;
    printf("Digite cinco valores: \n");
    for (i = 0; i < 5; ++i) {
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }
    media = soma / 5;
    printf("A media dos valores foi de %.2f", media);

return 0;	
}

//QUESYAO 4: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valores[8];
    int i;
    int x;
    int y;
    int soma;
    printf("Digite oito valores inteiros: \n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &valores[i]);
    }
    printf("Digite dois numeros de 0 a 7 equivalentes as posicoes no vetor: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    soma = valores[x] + valores[y];
    printf("O valor encontrado na posicao %d foi %d e na posicao %d foi %d, a soma deles resulta em %d", x, valores[x], y, valores[y], soma);

return 0;
}

//QUESTAO 5: 
#include <stdio.h>

int main() {
    int vetor_a[6] = {1, 0, 5, -2, -5, 7};
    int soma = vetor_a[0] + vetor_a[1] + vetor_a[5];
    printf("Soma: %d\n", soma);
    int i;
    vetor_a[4] = 100;
    printf("Valores do array vetor_a: \n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor_a[i]);
    }
return 0;	
}
