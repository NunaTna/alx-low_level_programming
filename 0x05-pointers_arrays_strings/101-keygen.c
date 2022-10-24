#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password
 * Return: 0
 */
int main(void)
{
	int ascii = 1050, i = 0, j, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 150)
	{
		random = rand() % 150;
		password[i] = random;
		ascii -= random;
		i++;
	}
	if (ascii > 0)
		password[i] = ascii;
	else
	{
		i--;
	}

	for (j = 0; j <= i; j++)
	{
		printf("%c", password[j]);
	}
	return (0);
}