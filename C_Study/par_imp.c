#include <stdio.h>

int main(){
	int a;

	printf("Digite um número e veja se é impar ou é par: ");
	scanf("%d", &a);

	if (a%2==0){
		printf("Esse número é par!\n");
	}
	else{
		printf("Esse número é impar!\n");
	}
	return 0;
}
