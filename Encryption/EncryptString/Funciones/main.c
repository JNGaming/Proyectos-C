// DONE BY VERA

// Librerías

#include <stdio.h>

int search(char a);
int verif(char* x);
char* encrypt(char* a);

// Función main

int main(void)
{
	char* string = "";

	while (1)
	{
		printf("\n*** ENCRIPTADOR DE FRASES ***\nBienvenido. Por favor, escribe la frase que desees encriptar\n*********** PROGRAMADO POR VERA ***********\n\n");
		scanf("%s", string);

		if (verif(string) == 0)
		{
			printf("La cadena que has pasado contiene un numero\n");
		}
		else
		{
			char* b = encrypt(string);
			printf("\nLa cadena encriptada ahora es: %s\n", b);
		}
	}
}