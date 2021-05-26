// DONE BY VERA

// Librer�as
#include <stdio.h>

void seeMoney(void);
void menu(void);

// Funci�n de salida

void out(void)
{
	printf("\n***** SALISTE DEL PROGRAMA *****\n*** PROGRAMADO POR VERA0011 ***\n");
	return;
}

// Funci�n de opciones tras realizar una operaci�n

void options(void)
{
	int c;

	printf("\n\n*** PRESIONA CUALQUIER TECLA ***\n1- Menu\n2- Salir\n********************************\n");
	scanf("%i", &c);

	switch (c)
	{
	case 1:
		menu();
		break;
	case 2:
		out();
		break;
	default:
		options();
		break;
	}
}
// Funci�n del men� principal

void menu(void)
{
	int op;

	printf("\n\n******** MENU DEL CAJERO ********\n Por favor, elige una de estas opciones:\n\n1- Mostrar saldo\n2- Agregar dinero\n3- Retirar dinero\n4- Salir del programa\n\n(Agrega el numero de la opcion elegida)\n*********************************\n");
	scanf("%d", &op);
	switch (op)
	{
	case 1:
		seeMoney();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		out();
		break;
	}
}

// Funci�n para mostrar el saldo

void seeMoney(void)
{
	char buff[1000];
	char money[] = "2000";
	FILE* file;
	
	file = fopen("bankAccount.txt", "r");

	if (file == 0 || file == NULL)
	{
		file = fopen("bankAccount.txt", "w");

		int x = fprintf(file, "%s", money);
		if (x >= 0)
		{
			fscanf(file, "%[^\n]", buff);

			fclose(file);

			printf("\n\n*** SALDO ***\nTienes %s$ en tu cuenta\n*************\n", buff);
		}
	}
	else
	{
		fscanf(file, "%[^\n]", buff);

		fclose(file);
		printf("\n\n*** SALDO ***\nTienes %s$ en tu cuenta\n*************\n", buff);
	}
	options();
}

// Funci�n main

int main(void)
{
	int i = 2;
	int pin;

	while (pin != 1234)
	{
		printf("\n******** BIENVENIDO AL CAJERO AUTOMATICO ********\nPor favor, introduce tu pin secreto:\n*************************************************\n");
		scanf("%d", &pin);

		if (pin != 1234)
		{
			if (i == 0)
			{
				printf("\n*** SALIENDO DEL PROGRAMA ***\n*****************************\n");
				return;
			}
			printf("\n*** PIN INCORRECTO, QUEDA(N) %i OPORTUNIDAD(ES) ***\n**************************************************\n", i);
			i--;
		}
	}

	if (pin == 1234)
	{
		menu();
	}
}