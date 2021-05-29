//DONE BY VERA

int search(char a);

// Encriptación de la frase pasada como parámetro

char* encrypt(char* a)
{
	char cad2[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '?', '¿', '¡', '!', '\"', '\'', '=', ')', '(', '[', ']', '+', '*', '}', '{', '.', ':', ';', ',', '-', '/', '&', '\\', '%', '$', '#', '@', '<', '>', '|', '_', '^', '~', '`', 'ö', 'ü', 'Ä', 'Ë', 'Ï','Ö', 'Ü', ' ' };
	char* newString = "";
	int i = 0;
	int f;

	while (a[i] != '\0')
	{
		int f = search(a[i]);

		if (f == -1)
		{
			char* x = "Ha habido un error al buscar el caracter en el diccionario\n";
			return (x);
		}
		newString[i] = cad2[f];
		i++;
	}

	return (newString);
}