include "main.h"
/**
 * _islower - checks for lowercase letters
 * @c: check character
 * Return: 0 if in uppercase, 1 if in lowercase
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
_putchar('\n');
}
