#include <stdio.h>
/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
	int fib1 = 0, fib2 = 1, sum;

	printf("%d\n%d\n", fib1, fib2);

		for (sum = 2; sum < 50; sum++)
		{
			sum = fib1 + fib2;
			printf("%d\n", sum);
			fib1 = fib2;
			fib2 = sum;
		}
		return (0);
}


