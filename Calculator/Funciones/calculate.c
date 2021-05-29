// DONE BY VERA

// Función que realiza la operación

int calculate(char* a, int b, int u, int w)
{
	float z;

	switch (a[b])
	{
	case '*':
		z = u * w;
		return (z);
	case '+':
		z = u + w;
		return (z);
	case '-':
		z = u - w;
		return (z);
	case '/':
		z = u / w;
		return (z);
	case '%':
		z = u % w;
		return (z);
	}
	return (0);
}