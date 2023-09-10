#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main-determine whether a number is positive or zero or positive 
 *
 * return:alawys 0(sucssec)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		print(f"is positive");
	else if (n<0)
		printf("is negative");
	else
		printf("is zero");
	return (0);
}
