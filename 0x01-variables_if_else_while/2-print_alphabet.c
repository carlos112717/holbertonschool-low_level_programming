/*imprimir el alfabeto en orden alfabetico*/
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	putchar(abc);
	putchar('\n');
	return (0);
}
