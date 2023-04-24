#include <stdlib.h>
#include <tme.h>
#include <stdio.h>
/**
 * main - Determines if a number is negative, positive or zero.
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;

	$rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive\n, n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	else (n == 0)
	{
		printf("%d is negative\n", n)
	}
	return (0);
}
