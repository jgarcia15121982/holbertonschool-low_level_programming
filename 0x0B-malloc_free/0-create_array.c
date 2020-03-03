#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the memory to print
 * @c: The char to initialize the array.
 *
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *s;
		unsigned int i;

		s = malloc(size * sizeof(*s));

		if (s != NULL)
		{
			i = 0;

			while (i < size)
			{
				s[i] = c;
				i++;
			}
			return (s);
		}
		else
			return (NULL);
	}
	else if (size == 0)
		return (NULL);
	return (0);
}
