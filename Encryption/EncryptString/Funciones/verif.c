//DONE BY VERA

// Función de verificación de si la cadena contiene caracteres especiales o números

int verif(char* x)
{
	int c = 1;
	int i = 0;

	while (x[i] != '\0')
	{

		if ((x[i] >= 65 && x[i] <= 90) || (x[i] >= 97 && x[i] <= 122))
		{
			c *= 1;
		}
		else
		{
			c = 0;
		}
		i++;
	}
	return (c);
}