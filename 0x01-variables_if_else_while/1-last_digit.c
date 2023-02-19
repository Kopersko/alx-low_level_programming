#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int digit = n % 10;
		if (n % 10 > 5)
		{
			printf("Last digit of %d is", n);
			printf(" %d", digit);
			printf(" and is greater than 5\n");
		}
		else if (n % 10 == 0)
		{
			printf("Last digit of %d is", n);
			printf(" %d", digit);
			printf(" and is zero\n");
		}
		else if (n % 10 < 6)
		{
			printf("Last digit of %d is", n);
			printf(" %d", digit);
			printf(" and is less than 6 and not 0\n");
		}
		return (0);
}
