//Faça um algoritmo que informe a quantidade total de calorias a partir 
//da escolha do usuário que deve informar o prato típico e a bebida. 
//PRATO BEBIDA MACARRÃO  750 cal         cha             30 cal
//JAPONES                324 cal         Suco de laranja 80 cal
//CHILENO                545 cal         Refri           90 cal 
//USAR SWITCH CASE *


#include<stdio.h> // bibliotecas
#include<stdlib.h> // alocação de memória
#include<locale.h>// portugues 
#include <math.h>// funções matematica 
#include <wchar.h>// tratamento de caracteres 

main() {
	setlocale(LC_ALL, "Portuguese");
	int prato;
	int bebida;
	int calprato;
	int calbebida;
	int result;
	int ok;
	
	calprato = 0;
	calbebida = 0;

	do {
		printf("Digite número ref. a escolhe de seu prato.\n");
		printf("Digite 1 para Macarrão.\n");
		printf("Digite 2 para Japones.\n");
		printf("Digite 3 para Chileno.\n");
		scanf("%d", &prato);		
		if (prato < 1 ){
			printf("Operação invalida, digite novamente.\n");
		}
		else if (prato > 3){
			printf("Operação invalida, digite novamente.\n");
		}
	} while (prato < 1 || prato > 3);
	
	do {
		printf("Digite número ref. a escolhe de sua bebida.\n");
		printf("Digite 1 para chá.\n");
		printf("Digite 2 para Suco de Laranja.\n");
		printf("Digite 3 para Refrigerante.\n");
		scanf("%d", &bebida);
		if (bebida < 1) {
			printf("Operação invalida, digite novamente.\n");
		}
		else if (bebida > 3) {
			printf("Operação invalida, digite novamente.\n");
		}
	} while (bebida < 1 || bebida > 3);
	
	switch (prato)
	{
	case 1:
		calprato = 750;
		break;
	case 2:
		calprato = 324;
		break;
	case 3:
		calprato = 545;
		break;
	default:
		break;
	}

	switch (bebida)
	{
	case 1:
		calbebida = 30;
		break;
	case 2:
		calbebida = 80;
		break;
	case 3:
		calbebida = 90;
		break;
	default:
		break;
	}
	printf("prato %d calorias\n", calprato);
	printf("bebida %d calorias\n", calbebida);

	result = calprato + calbebida;

	printf("O total de calorias de sua refeição será %d calorias\n", result);

	system("pause");
	return 0;
}
