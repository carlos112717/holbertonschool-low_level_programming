#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - prints string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str01[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str01, 59);
return (1);
}
