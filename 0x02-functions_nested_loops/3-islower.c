/**
 * _islower - It checks wheter a character is a lowercase character
 * @c: character for evaluation.
 *
 * Return: 1 if is lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
