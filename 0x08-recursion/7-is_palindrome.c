/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be counted
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palin_conf - Auxiliary function
 * @s: String to be evaluated
 * @len: Length of the string
 * Return: 1 or 0
 */
int palin_conf(char *s, int len)
{
	if (*s != '\0')
	{
		if (*s == *(s + len))
			return (1 * palin_conf(s + 1, len - 2));
		else
			return (0);
	}
	return (1);
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: String to be evaluated
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if (len == 0 || len == 1)
		return (1);
	else
		return (palin_conf(s, len));
}
