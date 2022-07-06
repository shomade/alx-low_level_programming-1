#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 * Return: Always 0. (Success)
 */
int main(void)
{
	long int i, j, k, next;

	j  = 1;

	k  = 2;

	for (i = 1; i < 50; i++)
{
	if (j != 20365011074)
{
	printf("%1d, ", j);
}
	else
{
	printf("%1d\n", j);
}
	next = j + k;
	j = k;
	k = next;
}
	return (0);
}
