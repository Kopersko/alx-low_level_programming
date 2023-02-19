#include <stdio.h>
/**
 * main: - betting if else if if
 * Return: Returns 0
 */
int main(void)
{
	int age;

	printf("What is your age ?");
	scanf("%d", &age);
	if (age > 18)
	{
		printf("You are good to go");
	} else if (age >= 0 && age < 18)
	{
		printf("sorry you are not eligible");
	} else if (age < 0)
	{
		printf("you are not born yet");
	} else
	{
		printf("invalid data!");
	}
	return (0);
}

