#include "main.h"

/**
 * _putchar - print a character to standard output
 * @ch: character to be printed
 *
 * Return: 1 i.e. the length of the character
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
