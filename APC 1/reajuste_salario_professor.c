
//CABEÇALHO
//Autor: Alanna Tomaz de Aquino Martins
//Objetivo: Calcular salário atual
//Data: 29/03/2024

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float salario_base, salario_atual, perc_reajuste = 0.0;
    int ano_inicio, ano_atual, i;
    int ganhou_bonus;
    const float PERC_BONUS = 0.02;
    
    printf ("Digite seu ano de contratação: ");
    scanf ("%d", &ano_inicio);
    i = ano_inicio;
    
    printf ("Digite o ano atual: ");
    scanf ("%d", &ano_atual);
    
    printf ("Digite o salário base: ");
    scanf ("%f", &salario_base);
    
    printf ("Digite o percentual de reajuste: ");
    scanf ("%f", &perc_reajuste);
    
    printf ("Digite 1 se ganhou bônus: ");
    scanf ("%d", &ganhou_bonus);
    
    salario_atual = salario_base;
    
    for (i; i < ano_atual; i++) {
        if (ganhou_bonus == 1) {
            salario_atual = salario_atual + (salario_atual * PERC_BONUS);
        }
        
        salario_atual = salario_atual + (salario_atual * perc_reajuste);
    }
    
    printf("O salário atual do professor é R$: %.1f", salario_atual);
    
    return 0;
}