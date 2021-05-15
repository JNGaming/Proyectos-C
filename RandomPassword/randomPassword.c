// DONE BY VERA

//Librerías
#include <stdio.h>
#include <stdlib.h>

char *dic = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789!@#$%%&/()=?¿¡*-+{}[]_.:,;><`^´|";
int a = 92;

// Función para generar una constraseña aleatoria

char *randomPassword(void)
{
	int i = 0;
	char k = "";

	while (i <= 8)
	{
		k[i] = rand() % a;
	}
	k[i + 1] = "\0";
	return (k);
}

// Función main

int main(void)
{
	char *a = randomPassword();

	printf("La contraseña es: ");
	printf("%s\n", a);
}