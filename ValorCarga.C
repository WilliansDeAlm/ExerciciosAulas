//Faça um programa que receba o código do estado de origem da carga de um caminhão, o peso da carga em toneladas(1000 Kg) e o código da carga.
//Calcule e apresente:
//o peso da carga em quilos
//o preço da carga
//o valor do imposto
//o valor total da carga(preço da carga + impostos).

#include<stdio.h> // bibliotecas
#include<stdlib.h> // alocação de memória
#include<locale.h>// portugues 
#include <math.h>// funções matematica 


main()
{
	setlocale(LC_ALL, "Portuguese");
	int uf;
	float PesoTonelada;
	int CodCarga;
	double Imposto;
	float PrecoQuilo;
	long PesoQuilo;
	float PrecoCarga;
	float ImpostoTotal;
	float ValorTotal;

	do {
		printf("digite o Código do estado de origem da carga:\n");
		scanf("%d", &uf);
		if (uf == 1) {
			Imposto = 0.20;
		}
		else if (uf == 2) {
			Imposto = 0.15;
		}
		else if (uf == 3) {
			Imposto = 0.10;
		}
		else if (uf == 4) {
			Imposto = 0.05;
		}
		else {
			printf("O código %d não é válido \n", uf);
		}
	} while (uf > 4 || uf < 1);

	printf("digite o peso da carga em toneladas:\n");
	scanf("%f", &PesoTonelada);
	PesoQuilo = (PesoTonelada * 1000);

	do {
		printf("digite o código da carga:\n");
		scanf("%d", &CodCarga);
		if (CodCarga <= 20 && CodCarga >= 10) {
			PrecoQuilo = 180;
		}
		else if (CodCarga <= 30 && CodCarga >= 21) {
			PrecoQuilo = 120;
		}
		else if (CodCarga <= 40 && CodCarga >= 31) {
			PrecoQuilo = 230;
		}
		else {
			printf("O código %d não é válido \n", CodCarga);
		}
	} while (CodCarga > 40 || CodCarga < 10);

	printf("O peso da carga em quilos será de %d\n", PesoQuilo);
	PrecoCarga = PrecoQuilo * PesoQuilo;
	printf("O preço da carga será de R$ %.2f\n", PrecoCarga);
	ImpostoTotal = Imposto * PrecoCarga;
	printf("O valor de Imposto da carga será de R$ %.2f\n", ImpostoTotal);
	ValorTotal = ImpostoTotal + PrecoCarga;
	printf("O valor TOTAL da carga será de R$ %.2f\n", ValorTotal);

	system("pause");
	return 0;
}
