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
	int i = 0;

	while (alphabet[i] != '\0')
	{
		putchar(alphabet[i]);
	}
	return (0);
}
