// DONE BY VERA

// Función que encuentra la posición del signo

int posSign(char* x)
{
	int i = 0;
	int z = 0;

	while (x[i] != '\0')
	{

		if (x[i] == '/' || x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '%')
		{
			return (z);
		}
		i++;
		z++;
	}
	return (-1);
}