// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

void savePassword(char* a);
char* randomPassword(int x);

// Función main

int main(void)
{
	int num;

	while ((num != 8) && (num != 16))
	{
		printf("\n*** GENERADOR DE CONTRASEÑAS ALEATORIAS ***\nBienvenido. Por favor, introduce la longitud de la contraseña\n(Valores admitidos: 8, 16)\n********** PROGRAMADO POR VERA**********\n");
		scanf("%d", &num);

		if ((num != 8) && (num != 16))
		{
			printf("\n*** EL NUMERO INTRODUCIDO ES INCORRECTO ***\n*******************************************\n");
		}
	}
	if ((num == 8) || (num == 16))
	{
		// Debemos usar srand() ya que la función rand() "calcula" sólo los números, y cada vez que se ejecuta el programa, saca los mismos números

		srand(getpid());
		char* a = randomPassword(num); // Guardamos la contraseña devuelta en una variable

		printf("La contraseña es: %s\n", a); // Mostramos la contraseña por consola

		savePassword(a); // Llamamos a la función para que guarde la contraseña en un archivo .txt

		return (0);
	}
}