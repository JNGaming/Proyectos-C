// DONE BY VERA

// Verificar si el string est� repleto de n�meros y s�mbolos

int verif(char* x)
{
	int c = 1;
	int i = 0;

	while (x[i] != '\0')
	{

		if ((x[i] >= 48 && x[i] <= 57) || (x[i] == '/' || x[i] == '+' || x[i] == '-' || x[i] == '*' || x[i] == '%'))
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