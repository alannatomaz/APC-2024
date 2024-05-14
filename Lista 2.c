//Lista 2
//Questao 1:

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






---------------------------------------------------------------------------------------------
//Lista 2:
//luvas

//QUESTAO 1:

#include<stdio.h>

int main() {
	int x, y, z;
	printf("Digite os tres lados para ver se forma um triangulo :\n");
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
//	if () { boa sorte meu bem te amo
		if (x == y && x == z) {
			printf("Encontramos um triangulo equilatero");
		}else if(x == y || x == z || y == z) {
			printf("Encontramos um triangulo isosceles");
		}else if(x != y && x != z && y != z) {
			printf("Encontramos um triangulo escaleno");
		}
	}else {
		printf("Nao foi possivel formar um triangulo");
	}
}


//Questão 2:

#include <stdio.h>

int main() {
	char operacao;
	float a,b;
	printf("Digite um simbolo de operacao: +, -, / ou *:\n");
	scanf("%c", &operacao); 
	printf("Digite dois floats:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	switch (operacao) {
		case '+': printf("A operacao selecionada foi %c e o resultado %f", operacao, a+b); break;
		case '-': printf("A operacao selecionada foi %c e o resultado %f", operacao, a-b); break;
		case '/': printf("A operacao selecionada foi %c e o resultado %f", operacao, a/b); break;
		case '*': printf("A operacao selecionada foi %c e o resultado %f", operacao, a*b); break;
	}
}


//Questao 3:

#include <stdio.h>

int main(){
   int n1=0,n2=1,n;
   printf("enter the value of n \n");
   scanf("%d",&n);
   
   printf("\n%d\n",n1);
   
   for(int i=1;i<=(n-1);i++) {
       printf("%d \n",n2);
       int n=n1+n2;
       n1=n2;
       n2=n;
   }

	printf("\n%d\n",fib(n));
    return 0;
}

int fib(int k) {
    // First, check our exit (stop) conditions:
    if (k == 0 || k == 1) return 1;

    // Now recursive part  
    return fib(k - 1) + fib(k - 2);
}
