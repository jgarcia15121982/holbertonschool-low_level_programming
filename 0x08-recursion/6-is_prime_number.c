/**
 * pn - Support function
 * @i: Is the variable we are working with.
 * @k: Is the variable we are working with.
 * Return: 1 or 0
 */
int pn(int i, int k)
{
	if (i < 2)
	{
		return (0);
	}
	else if (i == k)
	{
		return (1);
	}
	else if (i % k == 0)
	{
		return (0);
	}
	else
	{
		return (pn(i, k + 1));
	}
}
/**
 * is_prime_number - Function that detects if
 * a given number is prime number.
 * @n: Number to be evaluated.
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (pn(n, 2));
}
