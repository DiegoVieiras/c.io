"Aritmética. Escreva um programa que peça ao usuá-
rio que digite dois números, obtenha esses números e
imprima a soma, o produto, a diferença, o quociente e o
módulo (resto da divisão)."



#include <stdio.h>

int main(){
        int a, b;

        printf("Digite dois numeros: ");
        scanf("%d%d", &a, &b);

        printf("Sua soma: %d\n", a+b);
        printf("Seu produto: %d\n", a*b);
        printf("Sua diferenca: %d\n", a-b);
        printf("Seu quociente: %d\n", a/b);
        printf("Seu resto: %d\n", a % b);

        return 0;
}
