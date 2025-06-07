#include <stdio.h>

int main(){
	char estado1, estado2;
	char codigo1[3], codigo2[3];
        char nome_cidade1[10],nome_cidade2[10];
	int pop1, n_turist1, pop2, n_turist2;
	float area1, pib1,area2, pib2;

	printf("Insira a letra referente ao Estado: ");
	scanf(" %c", &estado1);
	printf("Insira o código da cidade: ");
        scanf("%s", codigo1);
	printf("Insira o nome da cidade: ");
	scanf("%s", nome_cidade1);
	printf("Insira a população: ");
	scanf("%d", &pop1);
	printf("Insira a area: ");
	scanf("%f", &area1);
	printf("Insira o numero de pontos turisticos: ");
	scanf("%d", &n_turist1);

	printf("Insira novamente a letra referente ao um novo Estado: ");
        scanf(" %c", &estado2);
	printf("Insira o código da nova cidade: ");
        scanf("%s", codigo2);
        printf("Insira novamente o nome de uma nova cidade: ");
        scanf("%s", nome_cidade2);
        printf("Insira a população dessa cidade: ");
        scanf("%d", &pop2);
        printf("Insira a area dessa nova cidade: ");
        scanf("%f", &area2);
        printf("Insira o numero de pontos turisticos dessa nova cidade: ");
        scanf("%d", &n_turist2);

	printf("\nCarta: 1\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", nome_cidade1);
	printf("População: %d\n", pop1);
	printf("Área: %.2f\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", n_turist1);

	printf("\nCarta: 2\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", nome_cidade2);
	printf("População: %d\n", pop2);
	printf("Área: %.2f\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", n_turist2);		

	


}
