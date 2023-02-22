#include "main.h"

/**
 * abs - Computes the main value of an integer
 *@c: The number to be computed.
 * Return: Absolute number or zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		c = c * -1;
	}
	return (c);

