// DONE BY VERA

// Funci�n que realiza la operaci�n

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