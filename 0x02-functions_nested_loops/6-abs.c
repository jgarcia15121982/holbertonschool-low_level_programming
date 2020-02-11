/**
 * _abs - Computes the absolute value of an integer
 * @n: number for evaluation.
 *
 * Return: a with the number converted to positive. n wheter number is
 * positive. 0 wheter is 0.
 */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * (-1);
		return (a);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
