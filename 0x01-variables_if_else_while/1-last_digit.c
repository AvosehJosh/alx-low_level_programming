#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main-starting point
 * Description: getting the last digit of a number
 * Return: 0
 *
 */

int main(void)

{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d greater than 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d less than 6\n", n, ld);
	}
	return (0);
}
