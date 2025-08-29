#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
	srand(time(NULL));
	int escolha;
	// int resultTotal = 0;
	int resultado;
	
	do
	{
		printf("\n1 - D4\n2 - D6\n3 - D8\n4 - D10\n5 - D12\n6 - D20\n7 - D100\n8 - Sair\n");
		printf("\nEscolha seu dado: ");
		scanf("%i", &escolha);
		
		if(escolha)
			switch(escolha)
			{	
				case 1:
					RollD4();
					break;
					// resultTotal = resultTotal + resultado;
					// printf("Seu total atual e: %i\n", resultTotal);
					
				case 2:
					RollD6();
					break;
			
				case 3:
					RollD8();
					break;
				
				case 4:
					RollD10();
					break;
					
				case 5:
					RollD12();
					break;
					
				case 6:
					RollD20();
					break;
					
				case 7:
					RollD100();
					break;
				
				default:
					printf("Escolha invalida!");
			}
		else 
		printf("Escolha invalida");
		
	}while(escolha != 8);
	
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
