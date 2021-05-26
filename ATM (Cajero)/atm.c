// DONE BY VERA

// Librerías
#include <stdio.h>

void seeMoney(void);
void menu(void);

// Función para crear un nuevo archivo
void fileCreate(void)
{
	char buff[1000];
	char name[] = "name = Vera";
	char pin[] = "pin = 1234";
	char money[] = "account = 2000";
	FILE* file;

	file = fopen("bankAccount.txt", "r");

	if (file == 0 || file == NULL)
	{
		file = fopen("bankAccount.txt", "a+");

		fprintf(file, "%s\n", name);

		fprintf(file, "%s\n", pin);
		
		fprintf(file, "%s\n", money);

		fclose(file);
	}
	seeMoney();
}

// Función de error al buscar los valores en el archivo .txt

void error(void)
{
	printf("\n*** ERROR ***\nHa ocurrido un error al buscar los datos en el archivo .txt. Asegurate de que los valores estan introducidos de forma correcta.\n*************");
	return;
}

// Función para sacar valores del archivo

char* values(char* a)
{
	int i = 0;
	int x = 0;
	char* b = "";

	while (a[i] != '\0')
	{
		if (a[i] == '=')
		{
			i++;
			if (a[i] == ' ')
			{
				while (a[i] != '\0')
				{
					b[x] = a[i];
					x++;
					i++;
				}
			}
		}
		i++;
	}
	return(b);
}

// Función de salida

void out(void)
{
	printf("\n***** SALISTE DEL PROGRAMA *****\n*** PROGRAMADO POR VERA0011 ***\n");
	return;
}

// Función de opciones tras realizar una operación

void options(void)
{
	int c;

	printf("\n\n*** PRESIONA CUALQUIER TECLA ***\n1- Menu\n2- Salir\n********************************\n");
	scanf("%1i", &c);

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
// Función del menú principal

void menu(void)
{
	int op;

	printf("\n\n******** MENU DEL CAJERO ********\n Por favor, elige una de estas opciones:\n\n1- Mostrar saldo\n2- Agregar dinero\n3- Retirar dinero\n4- Salir del programa\n\n(Agrega el numero de la opcion elegida)\n*********************************\n");
	scanf("%1d", &op);
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

// Función para mostrar el saldo

void seeMoney(void)
{
	char buff[1000];
	char name[] = "name = Vera";
	char pin[] = "pin = 1234";
	char money[] = "account = 2000";
	FILE* file;
	
	file = fopen("bankAccount.txt", "r");

	if (file == 0 || file == NULL)
	{
		fileCreate();
	}
	else
	{
		int i = 0;
		while (fscanf(file, "%[^\n]", buff) != EOF && i < 4)
		{
			fgetc(file);
			i++;
		}

		fclose(file);

		char* val = values(buff);

		printf("\n\n*** SALDO ***\nTienes %s$ en tu cuenta\n*************\n", val);
		options();
	}
}

// Función main

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
				out();
				return;
			}
			printf("\n*** PIN INCORRECTO, QUEDA(N) %i OPORTUNIDAD(ES) ***\n**************************************************\n", i);
			i--;
		}
	}

	if (pin == 1234)
	{
		menu();
		return;
	}
	return (0);
}