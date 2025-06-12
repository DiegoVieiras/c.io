#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int numero, aleat;

	srand(time(0));

	aleat = rand() % 10;

	printf("Digite um número de 0 a 9 e veja se acerta: ");
	scanf("%d", &numero);

	if (aleat == numero){
		printf("Parabéns, você acertou!!!\n");
	}else{
		printf("Você errou. Tente novamente.\n");
	}

	printf("O numero gerado foi %d\n", aleat);
	return 0;
}
