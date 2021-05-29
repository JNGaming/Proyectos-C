// DONE BY VERA

// Función para buscar la posición del caracter buscado

int search(char a)
{
	char cad1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ' };
	int length = sizeof(cad1);
	char newChar;
	int i = 0;

	while (i <= length)
	{
		if (cad1[i] == a)
		{
			return (i + 1);
		}
		i++;
	}
	return (-1);
}