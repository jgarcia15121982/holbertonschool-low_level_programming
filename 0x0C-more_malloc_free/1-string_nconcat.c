#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: String number 1.
 * @s2: String number 2.
 * @n: The first n bytes of s2
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, size1, size2, tsize;

	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
		size1 = 0;
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
		size2 = 0;
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	}
	if (n >= size2)
	{
		tsize = size1 + size2;
		s3 = malloc(sizeof(char) * tsize + 1);
		if (s3 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
				*(s3 + i) = *(s1 + i);
			for (j = 0; s2[j] != '\0'; i++, j++)
				*(s3 + i) = *(s2 + j);
			s3[i] = '\0';
			return (s3);
		}
		else
			return (NULL);
	}
	else if (n < size2)
	{
		tsize = size1 + n;
		s3 = malloc(sizeof(char) * tsize + 1);
		if (s3 != NULL)
		{
			for (i = 0; s1[i] != '\0'; i++)
				*(s3 + i) = *(s1 + i);
			for (j = 0; j < n; i++, j++)
				*(s3 + i) = *(s2 + j);
			s3[i] = '\0';
			return (s3);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
