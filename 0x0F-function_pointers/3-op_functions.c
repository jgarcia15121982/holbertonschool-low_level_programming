/**
 * op_add - Function that adds two integers.
 * @a: First integer to add.
 * @b: Second integer to add.
 *
 * Return: add result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function that substract two integers.
 * @a: First integer to substract.
 * @b: Second integer to substract.
 *
 * Return: substract result
 */

int op_sub(int a,  int b)
{
	return (a - b);
}
/**
 * op_mul - Function that calculates the
 * product of two integers.
 * @a: First integer to multiply.
 * @b: Second integer to multiply.
 *
 * Return: product result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Function that calculates the
 * quotient from two integers.
 * @a: First integer to divide.
 * @b: Second integer to divide.
 *
 * Return: divition result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (100);
	else
		return (a / b);
}
/**
 * op_mod - Function that returns the
 * modulo result from two integers.
 * @a: First integer to divide.
 * @b: Second integer to divide.
 *
 * Return: modulo result
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (100);
	else
		return (a % b);
}
