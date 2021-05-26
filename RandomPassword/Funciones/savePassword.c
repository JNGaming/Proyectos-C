// DONE BY VERA

// Librerías
#include <stdio.h>

void createFile(char* pass);

// Función para añadir la contraseña a un archivo con extensión .txt

void savePassword(char* a)
{
	FILE* file;

	file = fopen("passwordsGenerated.txt", "a+"); // Abrimos el archivo donde deseamos guardar las contraseñas generadas

	if (file == 0 || file == NULL)
	{
		createFile(a);
		printf("La contraseña ha sido guardada\n");
		return;
	}

	fprintf(file, "- %s\n", a); // Editamos el archivo y añadimos la contraseña

	fclose(file); // Cerramos el archivo

	printf("La contraseña ha sido guardada\n");
}