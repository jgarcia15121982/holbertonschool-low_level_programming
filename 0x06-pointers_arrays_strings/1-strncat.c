/**
 * _strncat - Append the string *src to the string *dest.
 * @dest: Destiny string.
 * @src: Origin string.
 * @n: Number of bytes to add.
 * Return: Append string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (n > 0)
		{
			dest[i] = src[j];
			i++;
			n--;
		}
		j++;
	}
	return (dest);
}
