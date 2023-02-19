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
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}
	return (0);
}
