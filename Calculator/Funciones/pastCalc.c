// DONE BY VERA

// Librer�as
#include <stdlib.h>

// Agrupar los n�meros tras el signo

int pastCalc(char* a, int b, int c)
{
	int z = 0;
	int i = 0;
	char* y = "";
	int w;

	while (i <= b)
	{
		i++;
	}
	while (i > b && i <= c)
	{
		y[z] = a[i];
		z++;
		i++;
	}
	w = atoi(y);

	return (w);
}