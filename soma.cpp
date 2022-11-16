#include <stdio.h>
#include <conio.h>
int main(void)
{

	float num, soma;
	int i;

	for (i = 1; i<=10; i++)
	{
		printf("Digite o %do numero: ",i);
		scanf("%f",&num);

		soma = (soma + num);

	}
	printf("Soma dos numeros %.1f",soma);
	
	getch();
	return(0);
}
