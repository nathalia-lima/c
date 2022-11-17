#include <stdio.h>
#include <stdlib.h>

void main() {
	int i, NUM[15];
	
	for (i=0; i<15; i++) {
		printf("Informe um numero: \n");
		scanf("%d", &NUM[i]);
	}
	
	for (i=0; i<15; i++) {
		printf("Numero: %d \n", NUM[i]);
	}
}
