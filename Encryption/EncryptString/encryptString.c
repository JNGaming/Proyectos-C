// DONE BY VERA

// Librerías

#include <stdio.h>
#include <string.h>

// Función para buscar la posición del caracter buscado

int search(char a)
{
	char cad1[53] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int length = sizeof(cad1);
	char newChar;
	int i = 0;

	while (i <= length)
	{
		if (cad1[i] == a)
		{
			return (i + 1);
		}
		i++;
	}
	return (-1);
}

// Función de verificación de si la cadena contiene caracteres especiales o números

int verif(char* x)
{
	int c = 1;
	int i = 0;

	while (x[i] != '\0')
	{

		if ((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122))
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

// Encriptación de la frase pasada como parámetro

char* encrypt(char* a)
{
	char cad2[53] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '?', '¿', '¡', '!', '\"', '\'', '=', ')', '(', '[', ']', '+', '*', '}', '{', '.', ':', ';', ',', '-', '/', '&', '\\', '%', '$', '#', '@', '<', '>', '|', '_', '^', '~', '`', ' ', 'ö', 'ü', 'Ä', 'Ë', 'Ï','Ö', 'Ü'};
	char* newString = "";
	int i = 0;
	int f;

	while (a[i] != '\0')
	{
		int f = search(a[i]);
		
		if (f == -1)
		{
			char *x = "Ha habido un error al buscar el caracter en el diccionario\n";
			return (x);
		}
		newString[i] = cad2[f];
		i++;
	}

	return (newString);
}

// Función main

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		int a = verif(argv[1]);
		
		if (a == 1)
		{
			char *b = encrypt(argv[1]);
			printf("La cadena encriptada ahora es: %s\n", b);
			return (0);
		}
		else
		{
			printf("La cadena que has pasado contiene un número\n");
			return (0);
		}
	}
	else
	{
		printf("Debes añadir una frase para encriptarla\n");
		return (0);
	}
}