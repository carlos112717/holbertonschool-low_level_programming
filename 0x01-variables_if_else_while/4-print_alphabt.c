/* imprimir el abecedario en orden alfabetico sin las letras q y e */
#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char q = 'q';

for (q = 'a'; q <= 'z'; q++)
{
if (q != 'q' && q != 'e')
{
putchar(q);
}
}
putchar('\n');
return (0);
}
