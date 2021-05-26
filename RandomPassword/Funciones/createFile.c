// DONE BY VERA

// Librerías
#include <stdio.h>

// Función para crear el archivo donde se guardan las contraseñas

void createFile(char *pass)
{
	FILE* file;

	file = fopen("passwordsGenerated.txt", "a+");

	if (file == 0 || file == NULL)
	{
		printf("Error al crear el archivo\n");
		return;
	}

	fprintf(file, "- %s\n", pass);

	fclose(file);
}