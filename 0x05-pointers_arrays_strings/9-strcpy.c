/**
 * _strcpy - copies a string from *src to another string *dest.
 * @dest: Destiny string.
 * @src: Origin string.
 * Return: copies string
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src != '\0')
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	*tmp = '\0';

	return (dest);
}
