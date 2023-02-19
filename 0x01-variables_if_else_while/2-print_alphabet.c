#include <stdio.h>
/**
 *main - print alphabet
 *
 * Description: print alph in l case
 *
 * Return:Always 0
 */
int main(void)
{
	char letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	return (0);
}
