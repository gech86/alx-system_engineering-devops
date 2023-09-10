#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n%10;
	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5\n", ny);
	else if (y == 0)
		printf("Last digit of %d is %d and is 0\n", ny);
	else
		printf("Last digit of %d is %d and is less than 6\n", ny);
	return (0);
}
