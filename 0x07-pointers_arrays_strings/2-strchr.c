/**
 * _strchr - Function that locates a character in string
 * @s: string that must be evaluated
 * @c: character to find
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
