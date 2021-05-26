// DONE BY VERA

// Librerías
#include <stdio.h>
#include <stdlib.h>

// Función para generar una constraseña aleatoria

char* randomPassword(int x)
{
	int i = 0;
	char* newPassword = "";
	char* o = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789#%$\\!¡¿?/&()[]{}='^*+-_.:,;><";

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