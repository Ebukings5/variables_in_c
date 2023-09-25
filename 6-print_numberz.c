#include <stdio.h>

int main()
{
	int numberz = '0';

	while (numberz <= '9')
	{
		putchar(numberz);
		numberz += 1;
	}
	putchar('\n');
	return (0);
}
