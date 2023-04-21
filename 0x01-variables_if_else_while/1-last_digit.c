#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: 'This program will assign a random number to the
 * variable n each time it is executed.
 * in order to print the last digit of the number stored in
 * the variable n'
 * Return: Always return 0 (success)
 *
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
