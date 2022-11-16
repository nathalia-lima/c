#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char *argv[])
{

	char nome[20];
	float salario, salariof, vendas, comissao;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite o total de vendas, em dinheiro, efetuadas por vc nesse mes: ");
	scanf("%f", &vendas);
	
	comissao = (vendas*0.15);
	salariof=(comissao+salario);
	
	printf("Ola, %s. Seu salario final eh: %.2f", nome, salariof);
	
	
	getch();
	return(0);
}
