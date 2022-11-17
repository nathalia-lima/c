#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int opcao=0, tecla=1;
	
	do {
		printf("1- bom dia\n2- boa tarde\n");
		scanf("%d", &opcao);
		if(opcao==1){
			printf("Bom dia :)");
		} else if(opcao==2){
			printf("Boa tarde :)");
		} else {
			printf("entrada invalida :(");
		}
		printf("\nreiniciar: digite 1\nsair: digite 0\n");
		scanf("%d", &tecla);
	} while (tecla!=0);
	
	
	return(0);
}
