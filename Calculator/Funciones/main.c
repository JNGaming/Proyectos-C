// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

int verif(char* x);
int posSign(char* x);
int lengthArgs(char* a);
int antCalc(char* a, int b);
int pastCalc(char* a, int b, int c);
int calculate(char* a, int b, int u, int w);

// Función main

int main(void)
{
	char* values;

	while (1)
	{
		printf("\n*** BIENVENIDO A LA CALCULADORA ***\nPor favor, introduce el calculo que quieres resolver:\n*******************\n");
		scanf("%s", values);

		printf("\nVALUES:\n %s", values);
		int a = verif(values);
		if (a == 1)
		{
			int b = posSign(values);
			if (b != -1)
			{
				int y = lengthArgs(values);
				int u = antCalc(values, b);
				int w = pastCalc(values, b, y);
				int x = calculate(values, b, u, w);
				printf("El resultado de la operacion es: %i\n", x);
			}
			else
			{
				printf("Los valores introducidos son incorrectos\n");
			}
		}
		else
		{
			printf("Los valores introducidos son incorrectos\n");
		}
	}
}