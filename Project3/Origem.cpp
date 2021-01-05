#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define Z 10// LIMITE DA MEMORIA	

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char tam;
	char matriz[Z][Z] = { 0 };
	int x;
	int y;
	int M = 0;
	int N = 0;
	do
	{
		printf("Digite o tamanho da matriz entre 0 e 10: \n");
		scanf_s("%i", &tam);
		printf("Sua matriz possui %i de linhas e de colunas. \n", tam);

		while ((tam < 1) || (tam > Z))
		{

			printf("Dimensão invalida!");
			printf("Digite um número de linhas entre 0 e 10: \n");
			scanf_s("%i", &tam);
			printf("Digite um número de colunas entre 0 e 10: \n");
			scanf_s("%i", &tam);
			printf("Sua matriz possui %i de linhas e de colunas. \n", tam);
		}
	}

	for (M = 0; M < tam; M++)//PARA VARRER LINHAS
	{
		for (N = 0; N < tam; N++)//PARA VARRER COLUNAS
		{
			printf("Digite o valor de [%d][%d]:", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	}
	printf("\nMatriz Digitada\n");
	for (M = 0; M < tam; M++)//PARA VARRER LINHAS
	{
		for (N = 0; N < tam; N++)//PARA VARRER COLUNAS
		{
			printf("%d ", matriz[M][N]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
