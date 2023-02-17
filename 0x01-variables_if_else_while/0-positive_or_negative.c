#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here */

/* betty style doc for function main goes there */
/**
* main - main block
* Description: To get a random number and print the number
* and if it positive, negative, or zero
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else 
		printf("%i is zero\n", n);
	return (0);
}
