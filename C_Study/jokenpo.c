#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int opcao, aleat,  pedra = 0, papel = 1, tesoura = 2;

	srand(time(0));


	do {
		aleat = rand() % 3;		
	       	printf("Digite uma das opções: 1 - Pedra | 2- Papel | 3 - Tesoura | 4 - Sair: ");
	       	scanf("%d", &opcao);

		switch(opcao){
	
		case 1:
			if (aleat == 2){
				printf("Parabéns você escolheu Pedra e ganhou!!!\n");
			}else if(aleat == 0){
				printf("Você empatou. Tente novmente.\n");
			}else{
				printf("Você perdeu. O adversário escolheu Papel. Tente novamente.\n");
			}
			break;
		case 2: 
			if (aleat == 0){
                        	printf("Parabéns você escolheu Papel e ganhou!!!\n");
                	}else if(aleat == 1){
                        	printf("Você empatou. Tente novmente.\n");
                	}else{
                        	printf("Você perdeu. O adversario escolheu Tesoura. Tente novamente.\n");
                	}
			break;
		case 3:
			if (aleat == 1){
                        	printf("Parabéns você escolheu Tesoura e ganhou!!!\n");
                	}else if(aleat == 2){
                        	printf("Você empatou. Tente novmente.\n");
                	}else{
                        	printf("Você perdeu. O adversário escolheu Pedra. Tente novamente.\n");
                	}
			break;
		default:
			if (opcao != 4){
				printf("### OPÇÃO INVÁLIDA!!! ###\n");
			}
		}
		printf("\n\n");
				
		
	}while (opcao != 4);

	printf("### Saiu do jogo! ###\n");
	
	return 0;
}

	





