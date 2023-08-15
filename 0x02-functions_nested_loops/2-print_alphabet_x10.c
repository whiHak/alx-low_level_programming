#include "main.h"

/**
 *prints 10 times the alphabet, in lowercase, followed new line
 */
void print_alphabet_10times(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

