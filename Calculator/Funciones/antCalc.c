// DONE BY VERA

// Librer�as
#include <stdlib.h>
// Agrupar los n�meros antes del signo

int antCalc(char* a, int b)
{
	int i = 0;
	char* x = "";
	int u;

	while (i <= b)
	{
		x[i] = a[i];
		i++;
	}
	u = atoi(x);

	return (u);
}