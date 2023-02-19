#include<stdio.h>

/*
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */

int main()
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
		 {
			 if(alp == 'q' || alp == 'e')
				 continue;
			 putchar(alp);
		 }

	putchar('\n');
	return 0;
}
