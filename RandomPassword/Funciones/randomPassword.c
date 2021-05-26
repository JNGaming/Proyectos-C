// DONE BY VERA

// Librer�as
#include <stdio.h>
#include <stdlib.h>

// Funci�n para generar una constrase�a aleatoria

char* randomPassword(int x)
{
	int i = 0;
	char* newPassword = "";
	char* o = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789#%$\\!��?/&()[]{}='^*+-_.:,;><";

	while (i <= x)
	{
		int b = rand() % 92;
		newPassword[i] = o[b];
		i++;
	}

	// A�ade un final de cadena a la nueva cadena

	newPassword[i - 1] = '\0';

	// Si la cadena est� vac�a, usa la recursividad para volver a crear la constrase�a

	if (newPassword == '\0')
	{
		randomPassword(x);
	}

	return (newPassword);
}