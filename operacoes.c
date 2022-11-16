#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	
	float num1, num2, resultado;
	int conta;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Escolha uma operacao:\n1-Soma\n2-Multiplicacao\n3-Divisao\n4-Subtracao\n");
	scanf("%d", &conta);
	
	switch(conta){
		case 1:
			resultado=num1+num2;
			break;
		
		case 2:
			resultado=num1*num2;
			break;
			
		case 3:
			resultado=num1/num2;
			break;
			
		case 4:
			resultado=num1-num2;
			break;
			
		default:
			printf("Valor invalido");
	}
	printf("O resultado eh: %2.f", resultado);
	
	return(0);
}
