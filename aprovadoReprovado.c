#include<stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	float freq, med;
	
	printf("Digite sua frequencia: ");
	scanf("%f", &freq);
	
	printf("Digite sua media: ");
	scanf("%f", &med);
	
	if(freq>75 && med>= 7){
		printf("Aprovado");
	} else if (freq<=75 && med<7) {
		printf("Reprovado");
	} else {
		printf("Reprovado");
	}
	
	return(0);
}
