//QUESTAO 1:
include <stdio.h>
#include <stdlib.h>

int main() {
    char string[11];
    int i;
    printf("Digite uma string de ate 10 caracteres: \n");
    gets(string);
    printf("Os primeiros quatro caracteres sao: \n");
    for (i = 0; i < 4; i++) {
        printf("%c\n", string[i]);
    }
  return 0;
}

//QUESTAO 2:
#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[51];
    int i;
    int quantidade_caracteres_string = 0;
    printf("Digite uma string de ate 50 caracteres: \n");
    gets(string);
    for (i = 0; string[i] != '\0'; i++) {
        quantidade_caracteres_string++;
    }
    printf("A string tem %d caracteres", quantidade_caracteres_string);

  return 0;
}

//QUESTAO 3: 
include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[11];
    int i;
    int tamanho_string;
    int posicao_caractere_final;
    printf("Digite uma string de ate 10 caracteres a ser imprimida de tras pra frente: \n");
    gets(string);
    tamanho_string = strlen(string);
    posicao_caractere_final = tamanho_string - 1;
    for (i = posicao_caractere_final; i >= 0; i--) {
        printf("%c", string[i]);
    }
  return 0;
}

//QUESTAO 4:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[11];
    char string_2[11];
    printf("Digite uma string de ate 10 caracteres : \n");
    gets(string);
    printf("Digite uma string para verificarmos se esta contida na string digitada anteriormente: \n");
    gets(string_2);
    if (strstr(string, string_2) != NULL) {
        printf("A string %s esta contida na string %s", string_2, string);
    } else {
        printf("A string %s nao esta contida na string %s", string_2, string);
    }
  return 0;
}
//QUESTAO 5:

include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[11];
    int i;
    int quantidade_vogais = 0;
    char caractere_para_substituir_vogais;
    printf("Digite uma string de ate 10 caracteres : \n");
    gets(string);
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            quantidade_vogais++;
        }
    }
    printf("Digite um caractere para substituir todas as vogais da string anterior: \n");
    scanf(" %c", &caractere_para_substituir_vogais);
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            string[i] = caractere_para_substituir_vogais;
        }
    }
    printf("A string possuia %d vogais e apos substituir todas por %c resultou em %s", quantidade_vogais, caractere_para_substituir_vogais, string) ;

  return 0;
}
