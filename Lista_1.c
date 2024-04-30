//Alanna
#include <stdio.h>

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

    
    
    //Lucas

#include <stdio.h>

int main(void) {
    int numero_lido = 0, numero_repeticoes = 0, numeros_pares = 0;
    printf("Meu bem, este codigo lera numeros inteiros ate que 3 numeros pares sejam lidos.");
    while (numeros_pares < 3) {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &numero_lido); 
        numero_repeticoes++;
        if (numero_lido % 2 == 0) numeros_pares++;
        printf("O while rodou %dx, ate o momento leu %d numeros pares e nesta iteracao leu o numero %d", numero_repeticoes, numeros_pares, numero_lido);
        
    }
    printf("\nFim");
    return 0;
}
