// DONE BY VERA

// Librer�as
#include <stdio.h>

void createFile(char* pass);

// Funci�n para a�adir la contrase�a a un archivo con extensi�n .txt

void savePassword(char* a)
{
	FILE* file;

	file = fopen("passwordsGenerated.txt", "a+"); // Abrimos el archivo donde deseamos guardar las contrase�as generadas

	if (file == 0 || file == NULL)
	{
		createFile(a);
		printf("La contrase�a ha sido guardada\n");
		return;
	}

	fprintf(file, "- %s\n", a); // Editamos el archivo y a�adimos la contrase�a

	fclose(file); // Cerramos el archivo

	printf("La contrase�a ha sido guardada\n");
}