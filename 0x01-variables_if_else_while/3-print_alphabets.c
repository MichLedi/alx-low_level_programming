#include <stdio.h>

/*
 * main - Entry Point 
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');
	return (0);
}

