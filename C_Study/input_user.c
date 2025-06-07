#include <stdio.h>

int main(){
	int a = 200;
	int b;
	int soma;

	printf("Inserir o numero b para somar com o a que vale 200: ");
	scanf("%d", &b);

	soma = a + b;

	printf("A soma dos dois numeros foi igual a %d\n", soma);
	return 0;

}
