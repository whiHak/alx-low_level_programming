#include <stdio.h>
/**
* main - Prints the alphabet.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alp2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;
	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (j = 0; j < 26; j++)
        {                                                            putchar(alp2[j]);
        }
	putchar('\n');
	return (0);
}
