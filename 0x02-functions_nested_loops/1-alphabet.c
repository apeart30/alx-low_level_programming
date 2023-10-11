#include "main.h"

/**
 * alphabets are going to be printed
 * Return:0 
 */

void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
