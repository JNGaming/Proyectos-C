// DONE BY VERA

// Librer�as

#include <stdio.h>
#include <ctype.h>

// Funci�n de verificaci�n de si la cadena contiene caracteres especiales o n�meros

int verif(char* x)
{
	int c = 1;
	int i = 0;

	while (*x != '\0')
	{

		if ((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122))
		{
			c *= 1;
		}
		else
		{
			c = 0;
		}

		x++;
		i++;
	}
	return (c);
}

// Encriptaci�n de la frase pasada como par�metro

/*char* encrypt(char* a)
{
	char buffer[];

	FILE* file;

	file = fopen("dic.txt", "a+");

	fread(buffer, )
}*/

// Funci�n main

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		int a = verif(argv[1]);
		
		if (a == 1)
		{
			printf("Todo GG\n");
			return (0);
			//encrypt(argv[1]);
		}
		else
		{
			printf("La cadena que has pasado contiene un n�mero\n");
			return (0);
		}
	}
	else
	{
		printf("Debes a�adir una frase para encriptarla\n");
		return (0);
	}
}