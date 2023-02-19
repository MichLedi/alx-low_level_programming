#include<stdio.h>

/*
 *
 *
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
