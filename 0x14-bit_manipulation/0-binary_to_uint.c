#include "holberton.h"
/**
 * binary_to_uint - Function that converts a binary number to
 * an unsigned int.
 * @b: A binary string
 *
 * Return: An unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int cont = 0, i = 0;
	unsigned int num_dec = 0;
	unsigned int mult = 1;
	char current_ch;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		cont++;
		i++;
	}

	for (i = cont - 1; i >= 0; i--)
	{
		current_ch = b[i];

		if (current_ch == '1')
			num_dec += mult;
		mult = mult * 2;
	}
	return (num_dec);
}
