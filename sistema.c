#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));
	int escolha;
	int resultTotal = 0;
	int resultado;
	
	do
	{
	printf("\nEscolha seu dado: \n1 - D4\n2 - D6\n3 - D8\n4 - D10\n5 - D12\n6 - D20\n7 - D100\n8 - Sair\n");
	scanf("%i", &escolha);
	
		if(escolha == 1)
		{
			RollD4();
			resultTotal = resultTotal + resultado;
			printf("Seu total atual e: %i\n", resultTotal);
		}else if(escolha == 2)
		{
			RollD6();
		}else if(escolha == 3)
		{
			RollD8();
		}else if(escolha == 4)
		{
			RollD10();
		}else if(escolha == 5)
		{
			RollD12();
		}else if(escolha == 6)
		{
			RollD20();
		}else if(escolha == 7)
		{
			RollD100();
		}
	
	} while(escolha < 8);
	
	return 0;
}

int RollD4()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 4) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD6()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 6) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD8()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 8) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD10()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 10) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD12()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 12) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD20()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 20) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}

int RollD100()
{
	int qtdeDados;
	int resultado = 0;
	
	printf("Digite a qtde: ");
	scanf("%i", &qtdeDados);
	
	do
	{
		resultado = resultado + ((rand() % 100) + 1);
		qtdeDados = qtdeDados - 1;
	}while(qtdeDados>0);
	
	printf("\nSeu resultado foi: %i", resultado);
	return resultado;
}