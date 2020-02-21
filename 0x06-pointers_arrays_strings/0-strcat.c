/**
 * _strcat - Appends the src string to the dest string.
 * @dest: Destiny string.
 * @src: Origin string.
 * Return: Appended string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
