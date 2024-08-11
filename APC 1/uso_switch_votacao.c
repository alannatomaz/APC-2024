//CABECALHO
//Autor: Alanna Tomaz de Aquino Martins
//Objetivo: Uso do switch para calcular os votos dos candidatos
//Data: 30/04/2024

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcao = 0;
	int opcao_votacao = 0;
	int candidato_1 = 0;
	int candidato_2 = 0;
	int candidato_3 = 0;
	
	printf(">>Esse e o MENU DE VOTACAO!");
	printf("\nCaso queira votar, digite 1, \npara encerrar a votacao digite 2: ");
    
	do{
    	scanf("%d", &opcao);
			
		if(opcao == 1){
			printf("\nVoce escolheu votar!\nPara votar no candidato 1, digite 1: \nPara votar no candidato 2, digite 2: \nPara votar no candidato 3, digite 3:");
			scanf("%d",&opcao_votacao);
			
			switch(opcao_votacao){
				case 1: printf("\nVoce votou no candidato 1!");
					candidato_1++;
					break;
					
				case 2: printf("\nVoce votou no candidato 2!");
					candidato_2++;
					break;
				
				case 3: printf("\nVoce votou no candidato 3!");
					candidato_3++;
					break;
					
			}	
			
		}else if(opcao == 2){
			printf("Voce escolheu encerrar a votacao!");
			break;
			
		}
		
		printf("\n\nVOTACAO ENCERRADA!");
		printf("\nO candidato numero 1 recebeu %d votos;\nO candidato numero 2 recebeu %d votos;\nO candidato numero 1 recebeu %d votos.", candidato_1, candidato_2, candidato_3);
		
    }while(opcao != 2);
    
    
	
return 0;	
}
