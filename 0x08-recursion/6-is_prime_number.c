#include "main.h"

int res_prime(int n, int num);

/**
 * is_prime_number -  function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: input integer
 * res_prime - function that returns actual prime number
 * Return: return 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (res_prime(n, n - 1));
}

/**
 * res_prime - function that calculates the prime number
 * @num: iterates
 * @n: input integer
 * Return: return 0 if the number is prime number
 */

int res_prime(int n, int num)
{
	if (num == 1)
		return (1);
	if (n % num == 0 && num > 0)
		return (0);
	return (res_prime(n, num - 1));
}


