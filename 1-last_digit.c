#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there 
 * main - entry point
 * Return: void
 */
int main(void)
{
		int n;
		int m;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		m = n % 10;
		if (m > 5)
			printf("Last digit of %d is %d and is great than 5", n, m);
		else if (n == 0)
			printf("Last digit of %d is %d and is 0", n, m);
		else if (m < 6 && m != 0)
			printf("Last digit of %d is %d and is less than 6 not 0", n, m);
		return (0);
}
