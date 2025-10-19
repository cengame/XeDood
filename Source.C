#include <stdio.h>
#include <stdlib.h>
#define clear system("cls");

struct Laser
{
	int ID;
	int xcfg;

}Laser[6];

int main()
{
	int Sum = 0, Bias = 0, LED;

	printf("Assinale o BIAS de configuração: \n");
	scanf_s("%d", &Bias);

	for (size_t i = 0; i < 6; i++)
	{
		Laser[i].ID = i + 1;
		printf("Digite a configuração do laser %d:", Laser[i].ID);
		scanf_s("%d", &Laser[i].xcfg);
		clear
		printf("O laser %d está ajustado em %d. \n", Laser[i].ID, Laser[i].xcfg);
		system("pause");
		clear
	}

	printf("Configurações finais dos lasers\n");
	for (size_t i = 0; i < 6; i++)
	{
		Sum += Laser[i].xcfg;
	}
	printf("Soma total: %d\n", Sum);
	if (Sum >= Bias)
	{
		LED = 1;
	}
	else
	{
		LED = 0;
	}
	printf("Estado do LED: %d\n(0- Desligado, 1- Ligado)", LED);

	return;

}
