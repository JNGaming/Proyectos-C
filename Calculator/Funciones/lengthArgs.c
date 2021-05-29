// DONE BY VERA

// Función que determina la longitud del argumento introducido

int lengthArgs(char* a)
{
	int i = 0;
	while (1)
	{
		if (a[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}