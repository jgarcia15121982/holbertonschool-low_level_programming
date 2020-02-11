/**
 * _isalpha - It checks wheter a character is letter, lowercase or
 * uppercase character.
 * @c: character for evaluation.
 *
 * Return: 1 if is letter, lowercase or uppercase. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
