// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Verificar si el string está repleto de números y símbolos

int verif(char* x)
{
	int c = 1;
	int i = 0;

	while (x[i] != '\0')
	{

		if ((x[i] >= 48 && x[i] <= 57) || (x[i] == '/' || x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '%'))
		{
			c *= 1;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (c);
}

// Función que encuentra la posición del signo

int posSign(char* x)
{
	int i = 0;
	int z = 0;

	while (x[i] != '\0')
	{

		if (x[i] == '/' || x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '%')
		{
			return (z);
		}
		i++;
		z++;
	}
	return (-1);
}

 // Función que determina la longitud del argumento introducido

int lengthArgs(char* a)
{
	int i = 0;
	while (1)
	{
		if (a[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}

// Agrupar los números antes del signo

int antCalc(char *a, int b)
{
	int i = 0;
	char* x = "";
	int u;

	while (i <= b)
	{
		x[i] = a[i];
		i++;
	}
	u = atoi(x);

	return (u);
}

// Agrupar los números tras el signo

int pastCalc(char *a, int b, int c)
{
	int z = 0;
	int i = 0;
	char* y = "";
	int w;

	while (i <= b)
	{
		i++;
	}
	while (i > b && i <= c)
	{
		y[z] = a[i];
		z++;
		i++;
	}
	w = atoi(y);

	return (w);
}

// Función que realiza la operación

int calculate(char *a, int b, int u, int w)
{
	float z;

	switch (a[b])
	{
	case '*':
		z = u * w;
		return (z);
	case '+':
		z = u + w;
		return (z);
	case '-':
		z = u - w;
		return (z);
	case '/':
		z = u / w;
		return (z);
	case '%':
		z = u % w;
		return (z);
	}
	return (0);
}

// Función main

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		int a = verif(argv[1]);
		if (a == 1)
		{
			int b = posSign(argv[1]);
			if (b != -1)
			{
				int y = lengthArgs(argv[1]);
				int u = antCalc(argv[1], b);
				int w = pastCalc(argv[1], b, y);
				int x = calculate(argv[1], b, u, w);
				printf("El resultado de la operacion es: %i\n", x);
				return (0);
			}
			else
			{
				printf("Los valores introducidos son incorrectos\n");
				return (0);
			}
		}
		else
		{
			printf("Los valores introducidos son incorrectos\n");
			return (0);
		}
	}
	else
	{
		printf("Los valores introducidos son incorrectos\n");
		return (0);
	}
}