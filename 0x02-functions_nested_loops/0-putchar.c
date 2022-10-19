#include "main.h"
/**
 * main - Print "Developer" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	int c = 0;
	char developer[10] = "_putchar\n";

	while (c < 9)
	{
		_putchar(developer[c]);
		c++;
	}
	return (0);
}


