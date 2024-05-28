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
