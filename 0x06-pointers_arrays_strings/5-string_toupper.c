#include "main.h"
/**
 * string_toupper - change all lowercase to upper case
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *str)
{

	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
