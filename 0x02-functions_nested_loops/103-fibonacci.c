#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int k1, k2, rn, arn;

	k1 = 1;
	k2 = 2;
	rn = arn = 0;
	while (rn <= 4000000)
	{
	rn = k1 + k2;
	k1 = k2;
	k2 = rn;
	if ((k1 % 2) == 0)
	{
	arn += k1;
	}
}
