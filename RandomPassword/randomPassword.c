// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función para añadir la contraseña a un archivo con extensión .txt

void savePassword(char *a)
{
	FILE* file;

	file = fopen("passwordsGenerated.txt", "a+"); // Abrimos el archivo donde deseamos guardar las contraseñas generadas

	fprintf(file, "- %s\n", a); // Editamos el archivo y añadimos la contraseña

	fclose(file); // Cerramos el archivo

	printf("La contraseña ha sido guardada\n");
}

// Función para generar una constraseña aleatoria

char *randomPassword(int x)
{
	int i = 0;
	char *newPassword = "";
	char *o = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789#%$\\!¡¿?/&()[]{}='^*+-_.:,;><";

	while (i <= x)
	{
		int b = rand() % 92;
		newPassword[i] = o[b];
		i++;
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
		// Debemos usar srand() ya que la función rand() "calcula" sólo los números, y cada vez que se ejecuta el programa, saca los mismos números

		srand(getpid());

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