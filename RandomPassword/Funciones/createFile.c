// DONE BY VERA

// Librer�as
#include <stdio.h>

// Funci�n para crear el archivo donde se guardan las contrase�as

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