#include<stdlib.h>
#include<stdio.h>

int main(){
    char s[] = "Maria", *ptr = s;

    //printar r (usando array de char, var s)
    printf("r usando array: %c", s[2]);

    //printar 1000 (usando array de char, var s)
    printf("\n1000 usando array: %c", s[4000]);
    printf("\nou 1000 (end de memoria de M) usando array: %p", &s[0]);


    //printar 1001 (usando array de char, var s)
    printf("\n1001 usando array: %p", &s[1]);

    //printar 5000 (usando array de char, var s)
    printf("\n5000 usando array: %p", &s[4000]);


    //printar r (usando ptr)
    printf("\n\nr usando ptr: %c", *(ptr+2));

    //printar 1000(usando ptr)
    printf("\n1000 usando ptr: %c", *(ptr+4000));
    printf("\nou 1000 (end de memoria de M) usando ptr: %p", ptr);

    //printar 1001(usando ptr)
    printf("\n1001 usando ptr: %p", ptr+1);

    //printar 5000(usando ptr)
    printf("\n5000 usando ptr: %p", ptr+4000);

    /*
    Respostas exercicio 2:
    a) Falso = 208
    b) Verdadeiro
    c) Falso = Seria *(pv + 3)
    d) Verdadeiro
    e) Falso = *(pv + 2) retorna valor e não endereço de memória
    f) Verdadeiro
    
    */


}
