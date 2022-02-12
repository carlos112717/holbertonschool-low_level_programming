/*imprimir el alfabeto en orden alfabetico en mayusculas y minusculas*/
#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char bB;

for (bB = 'a'; bB <= 'z'; bB++)
{
putchar(bB);
}
putchar('\n');

for (bB = 'A'; bB <= 'Z'; bB++)
{
putchar(bB);
}

return (0);
}
