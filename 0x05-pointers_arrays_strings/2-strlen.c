/**
 * _strlen - returns the length of a string
 *
 * int: return the length of a string
 * @s: a pointer to char s
 *
 * Return: An integer with th length of a string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*s)
	{
		s++;
		cont++;
	}
	return (cont);
}
