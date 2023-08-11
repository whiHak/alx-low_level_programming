/**
* main - Prints the alphabet without q and e.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)	
{
lputchar(i);
}
}
putchar('\n');
return (0);
}	
