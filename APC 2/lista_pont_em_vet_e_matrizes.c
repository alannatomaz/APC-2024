//Avaliação 2 - Ponteiros em Vetores e Matrizes

//1.a)

#include <stdio.h>

int main(){
    int vet[8] = {4, 6, 3, 8, 2, 5, 9, 1};
    for (int i = 0; i<8; i++){
        printf("vet[%d]: %d\n", i, *(vet+i));
    }

    return 0;
}



//1.b)

#include <stdio.h>

int main(){
    char string[50] = "Avaliacao 2";
    int i = 0;

    while(string[i] != '\0'){
        printf("string[%d]: %c\n", i, *(string+i));
        i++;
    }
    return 0;
}



//2.a)

#include <stdio.h>

int main(){
    char string[20] = "Exercicio de APC II";
    int i = 0;
    char letra;


    printf("Digite uma letra para saber qual a sua ultima ocorrencia na string \"%s\":", string);
    scanf("%c", &letra);

   for(i = 18; i >= 0; i--){
       if(*(string + i) == letra){
           printf("\nA posicao em que %c se encontrou por ultimo foi: %p", letra, (string+1));
           break;
        }
        if(i == 0 && *(string + i) != letra){
           printf("\nCaractere nao encontrado!"); 
        }
   }


    return 0;
}

//2.b)

#include <stdio.h>

int main(){
    char string[20] = "Exercicio de APC II";
    char *string_ptr = string;

    for(*string_ptr; *string_ptr != '\0'; string_ptr++){
       printf("%c", *string_ptr);
    }

    printf("\n%p", string_ptr);
    printf("\n%p", string);

    printf("A quantidade de carcteres na string \"%s\" e de: %ld", string, string_ptr - string);

    return 0;
}


//4)

#include <stdio.h>

int main(){
    int num[3][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
  };
  int *pnum = (int *)num;

  for(int i = 0; i < 12; i++) {
    if(*(pnum+i) % 2 == 0) {
        printf("\nEncontrei o numero par %d", *(pnum+i));
        *(pnum+i) = 0;
    }
  }

  printf("\nA matriz ficou assim: \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 4; j++) {
      printf("num[%d][%d]: %d\n", i, j, num[i][j]);
    }
  }
    return 0;
}