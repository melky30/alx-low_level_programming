#include "0-putchar.c"

/**
* main - entry point
* Description: Prints alx with _putchar
* Return: always 0
*/

int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i <= 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
