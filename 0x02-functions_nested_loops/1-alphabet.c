/**
 * @file 1-alphabet.c
 * @author Carlos A. Cortes
 * @brief Algorithm to print the alphabet in lowercase.
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <main.h>

/**
 * main - library where the _putchar function is located
 *
 * Returns: 0 if the program ends successfully
 */

void print_alphabet(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	_putchar("%c", alphabet);
	-putchar("\n");
	return (0);
}
