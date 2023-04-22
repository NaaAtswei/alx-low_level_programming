#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print numbers of base 16'
 * Return: Always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (m = 'a'; n <= 'f'; m++)
	putchar(m);
	putchar('\n');
	return (0);
}
