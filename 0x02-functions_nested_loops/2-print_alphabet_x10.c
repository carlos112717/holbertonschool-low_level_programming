/**
 * @file 2-print_alphabet_x10.c
 * @author Carlos A. Cortes
 * @brief Algorithm to print 10 times the alphabet in lowercase
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <main.h>

/**
 * @brief Main function
 *
 * main - Prints 10 times the alphabet in lowercase
 *
 * Return: 0 if success or -1 if error
 * @return int 0 if the program ends successfully
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i++ <= 9)
	{
	while (c <= 'z')
	{
	_putchar("%c", c);
	c++;	/* Stop the process if c is 'z' */
	}
	c = 'a';
	}
	_putchar("\n");
}
