#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of args
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
