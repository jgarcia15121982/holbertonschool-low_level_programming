/**
 * counter - Returns the number of characters of a word
 * @s: string that must be evaluated
 * Return: An integer.
 */
unsigned int counter(char *s)
{
	unsigned int i = 0;
	int cont = 0;

	while (s[i] != 32 && s[i] != 44 && s[i] != 46 && s[i] != '\0')
	{
		s++;
		cont++;
	}
	return (cont);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: test string
 * @accept: string to be evaluated
 * Return: An integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, x, y;
	unsigned int count = 0;

	a = counter(s);
	b = counter(accept);

	for (x = 0; x < b; x++)
	{
		for (y = 0; y < a; y++)
		{
			if (accept[x] == s[y])
			{
				count++;
			}
		}
	}
	return (count);
}
