// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función para añadir la contraseña a un archivo con extensión .txt

void savePassword(char *a)
{
	FILE* file;

	file = fopen("passwordsGenerated.txt", "a+"); // Abrimos el archivo donde deseamos guardar las contraseñas generadas

	fprintf(file, "- %s\n", a);	//fputs(a, file); // Editamos el archivo y añadimos la contraseña

	fclose(file); // Cerramos el archivo

	printf("La contraseña ha sido guardada\n");
}

// Función para generar una constraseña aleatoria

char *randomPassword(int x)
{
	// Debemos usar srand() ya que la función rand() "calcula" sólo los números, y cada vez que se ejecuta el programa, saca los mismos números

	srand(getpid());

	// Definición de variables (contador, nuevo contenedor de la cadena, primer valor de la cadena dic)

	int i = 0;
	char *newPassword = "";
	int a = 1;
	int dic2 = 126;
	int y = rand() % dic2;
	int dic1 = y;

	// Mientras el contador sea menor o igual al número pasado como parámetro

	while (i <= x)
	{
		// Cambia el valor base de dic1 para añadirlo a la nueva cadena

		dic1 = (dic1 * 2);

		// Si dic1 se pasa de dic2, dic1 vuelve al valor principal y se le suma un número

		if (dic1 >= dic2)
		{
			dic1 = y + (a * 2);
		}

		newPassword[i] = dic1;
		i++;
		a++;
		dic1++;
	}

	// Añade un final de cadena a la nueva cadena

	newPassword[i - 1] = '\0';

	// Si la cadena está vacía, usa la recursividad para volver a crear la constraseña

	if (newPassword == '\0')
	{
		randomPassword(x);
	}

	return (newPassword);
}

// Función main

int main(int argc, char **argv)
{
	// Si los argumentos pasados como parámetro son diferentes a 2 (nombre del programa y el primer parámetro) salta error
	if (argc == 2)
	{
		if (atoi(argv[1]) == 8) // Tranformar un string en un entero con atoi
		{
			char *a = randomPassword(8); // Guardamos la contraseña devuelta en una variable

			printf("La contraseña es: %s\n", a); // Mostramos la contraseña por consola

			savePassword(a); // Llamamos a la función para que guarde la contraseña en un archivo .txt

			return (0);
		}
		else if (atoi(argv[1]) == 16) // Tranformar un string en un entero con atoi
		{
			char *a = randomPassword(16); // Guardamos la contraseña devuelta en una variable

			printf("La contraseña es: %s\n", a); // Mostramos la contraseña por consola

			savePassword(a); // Llamamos a la función para que guarde la contraseña en un archivo .txt

			return (0);
		}
		else
		{
			printf("El valor es incorrecto.\nValores que puedes introducir:\n- 8\n- 16");
			return (0);
		}
	}
	else
	{
		printf("Debes definir la longitud de tu contraseña.\nValores que puedes introducir:\n- 8\n- 16");
		return (0);
	}
}