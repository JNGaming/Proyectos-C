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
	char *k = "";

	while (i <= 8)
	{
		i++;
	}
	//k[i] = '\0';
	return (dic);
}

// Función main

int main(void)
{
	char *a = randomPassword();

	printf("La contraseña es: ");
	printf("%s\n", a);
}