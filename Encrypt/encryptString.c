// DONE BY VERA

// Librer�as

#include <stdio.h>
#include <string.h>

// Funci�n para calcular la longitud del string
/*int length(char* a)
{
	int i = 0;

	while (*a != '\0')
	{
		i++;
		a++;
	}
	return (i);
}*/

// Funci�n para buscar en el diccionario

char hash(char a)
{
	FILE* file;
	char newChar;
	char x;
	int i = 0;

	file = fopen("dic.txt", "r");

	x = fgetc(file);

	switch (a)
	{
		case 'A':
			newChar = '1';
			break;
		case 'B':
			newChar = '2';
			break;
		case 'C':
			newChar = '3';
			break;
		case 'D':
			newChar = '4';
			break;
		case 'E':
			newChar = '5';
			break;
		case 'F':
			newChar = '6';
			break;
		case 'G':
			newChar = '7';
			break;
		case 'H':
			newChar = '8';
			break;
		case 'I':
			newChar = '9';
			break;
		case 'J':
			newChar = '0';
			break;
		case 'K':
			newChar = '?';
			break;
		case 'L':
			newChar = '�';
			break;
		case 'M':
			newChar = '�';
			break;
		case 'N':
			newChar = '!';
			break;
		case 'O':
			newChar = '\"';
			break;
		case 'P':
			newChar = '\'';
			break;
		case 'Q':
			newChar = '=';
			break;
		case 'R':
			newChar = ')';
			break;
		case 'S':
			newChar = '(';
			break;
		case 'T':
			newChar = '[';
			break;
		case 'U':
			newChar = ']';
			break;
		case 'V':
			newChar = '+';
			break;
		case 'W':
			newChar = '*';
			break;
		case 'X':
			newChar = '}';
			break;
		case 'Y':
			newChar = '{';
			break;
		case 'Z':
			newChar = '.';
			break;
		case 'a':
			newChar = ':';
			break;
		case 'b':
			newChar = ';';
			break;
		case 'c':
			newChar = ',';
			break;
		case 'd':
			newChar = '-';
			break;
		case 'e':
			newChar = '/';
			break;
		case 'f':
			newChar = '&';
			break;
		case 'g':
			newChar = '\\';
			break;
		case 'h':
			newChar = '%';
			break;
		case 'i':
			newChar = '$';
			break;
		case 'j':
			newChar = '#';
			break;
		case 'k':
			newChar = '@';
			break;
		case 'l':
			newChar = '<';
			break;
		case 'm':
			newChar = '>';
			break;
		case 'n':
			newChar = '|';
			break;
		case 'o':
			newChar = '_';
			break;
		case 'p':
			newChar = '^';
			break;
		case 'q':
			newChar = '�';
			break;
		case 'r':
			newChar = '�';
			break;
		case 's':
			newChar = '�';
			break;
		case 't':
			newChar = '�';
			break;
		case 'u':
			newChar = '�';
			break;
		case 'v':
			newChar = '�';
			break;
		case 'w':
			newChar = '�';
			break;
		case 'x':
			newChar = '�';
			break;
		case 'y':
			newChar = '�';
			break;
		case 'z':
			newChar = '�';
			break;
	}

	fclose(file);
	return (newChar);
}

// Funci�n de verificaci�n de si la cadena contiene caracteres especiales o n�meros

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

// Encriptaci�n de la frase pasada como par�metro

char* encrypt(char* a)
{
	char* newString = "";
	int i = 0;

	while (a[i] != '\0')
	{
		newString[i] = hash(a[i]);
		i++;
	}

	return (newString);
}

// Funci�n main

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		int a = verif(argv[1]);
		
		if (a == 1)
		{
			//int x = length(argv[1]);
			char *b = encrypt(argv[1]);
			printf("La cadena encriptada ahora es: %s\n", b);
			return (0);
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