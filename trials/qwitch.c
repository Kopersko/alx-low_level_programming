#include <stdio.h>
/**
 * main: -switch statement
 * Return: Returns 0
 */

int main(void)
{
	char grade;

	printf("please enter your grade to see your mark\n");
	scanf("%c", &grade);
	switch (grade)
	{
	case'A':
		printf("you are brilliant");
		break;
	case'B':
		printf("you can do better");
		break;
	case 'F':
		printf("you have to work harder in order to improve");
		break;
	default:
		printf("No remark");
	}
		return (0);
}




