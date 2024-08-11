#include <stdlib.h>
#include <stdio.h>

	int main ( ){
		int i;
		int array[10];
		
	for (i = 0; i < 100; i++) {
		array[i] = i;
		printf("%d\n", i, array[i]);
	}
	
	
	system("pause");
	return 0;
}

----------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

int main(){
	int valores[6];
	int i = 0;

	for(i; i < 6; i++){
		printf("Digite o valor %d: ", i +1);
		scanf("%d", &valores[i]);
	}
	printf("Os valores lidos foram: ");
	for(i = 0; i < 6; i++){
		printf(" %d", valores[i]);
		
	}
	

}
