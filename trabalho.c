#include<stdio.h>

int main()
{
	char nome[25];
	int cod = 0;
	int quant = 0;
	double total = 0.0;
	
	printf("mensagem de bem vindo\n")
	printf("Informe o seu nome:");
	scanf("%s",nome);
	
	do
	{
		printf("===========CARDAPIO===========\n");
		printf("1 - pastel ----------- R$ 8,00\n");
		printf("2 - carne ----------- R$ 20,00\n");
		printf("3 - pizza ----------- R$ 10,00\n");
		printf("4 - dogao ----------- R$ 12,00\n");
		printf("5 - sair ---------------------\n");
		printf("==============================\n");
		printf("Informe o codigo do seu pedido\n");
		scanf("%d",&cod);
		
		switch(cod)
		{
			case 1:
				printf("Informe a quantidade\n");
				scanf("%d",&quant);
				total = total + 8*quant;
			break;
			case 2:
				printf("Informe a quantidade\n");
				scanf("%d",&quant);
				total = total + 20*quant;
			break;
			case 3:
				printf("Informe a quantidade\n");
				scanf("%d",&quant);
				total = total + 10*quant;
			break;
			case 4:
				printf("Informe a quantidade\n");
				scanf("%d",&quant);
				total = total + 12*quant;
			break;
		}
	}while(cod != 5);		
			
	printf("O valor total %.2lf\n,total");		
			
	return (0);		
}						