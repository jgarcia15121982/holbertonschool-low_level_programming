/**
 * print_name - Function that prints a name.
 * @name: Pointer to a char.
 * @f: Pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}
