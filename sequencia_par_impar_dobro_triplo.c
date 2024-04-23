//CABECALHO
//Autor: Alanna Tomaz de Aquino Martins 
//Matricula: 2412130055
//Objetivo: USO DO WHILE (Sequencia dos 10 proximos numeros a partir do dobro ou do triplo do numero inserido pelo usuário, dependendo se esse era par ou impar)
//Data: 23/04/2024

#include <stdio.h>
#include <stdlib.h>

  int main (void){
    int numero = 0;
    int dobro = 0;
    int triplo = 0;
    int i = 0;

    printf("Insira um numero:");
    scanf("%d", &numero);
    

    if(numero%2 == 0){
        printf("-ok, voce inseriu um numero PAR!");
        dobro = (numero * 2);
        printf("\n-O dobro do número inserido é: %d", dobro);
        
        printf("\n-A sequência dos 10 proximos numeros a partir do dobro do numero inserido e: ");
            
            while(i < 10){
                i = i + 1;
                printf("\n %d", dobro + i);
                
            }
    }else if(numero%2 == 1){
        printf("-ok, voce inseriu um numero IMPAR!");
        triplo = (numero * 3);
        printf("\n-O triplo do número inserido é: %d", triplo);
        
        printf("\n-A sequência dos 10 proximos numeros a partir do triplo do numero inserido e: ");
            
            while(i < 10){
                i = i + 1;
                printf("\n %d", triplo + i);
            }
            
    }
    

  return 0;

  }

