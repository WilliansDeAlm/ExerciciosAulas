//Elabore um programa que leia o RA do aluno, suas 4 notas e calcule a média final. 
//Se o aluno entrou pelo studeo, apresentar a mensagem "procedimento correto". 
//Caso o aluno tenha entrado apenas pelo classroom, a apresentar a mensagem "se liga senão ganha falta".
//Apresentar RA e média do aluno.

#include<stdio.h> // bibliotecas
#include<stdlib.h> // alocação de memória
#include<locale.h>// portugues 
#include <math.h>// funções matematica 

main() {
	setlocale(LC_ALL, "Portuguese");
	float notaX[4];
	int i;
	float nota;
	float media;
	int ra;
	int resp;

	(nota = 0);

	printf("Informe seu R.A.\n");
	scanf("%d", &ra);

	for (i = 1; i < 4; i++) {
		printf("digite a %iº nota\n", i + 1);
		scanf("%f", &notaX[i]);
		printf("%.2d\n", i);
	}
	for (i = 1; i < 4; i++) {
		nota = nota + notaX[i];
		printf("%.2d\n", i);
	}
	media = (nota / (i-1));
	printf("%.2d\n", i);

	do{
	printf("Você entrou pelo Studeo?\nDígite 1 - para SIM\nDígite 2 - para Não\n");
	scanf("%d", &resp);
	
		if (resp == 1) {
			printf("Procedimento correto\n");
			printf("A Média do aluno com R.A. %d é %.2f\n", ra, media);
		}
		else if (resp == 2){		
			printf("SE LIGA SE NÃO GANHA FALTA\n");
			printf("A Média do aluno com R.A. %d é %.2f\n", ra, media);
		}
		else {
			printf("Resposta não corresponde a uma opção válida!\n");
		}
	} while (resp != 1 && resp != 2);
	system("pause");
	return 0;
