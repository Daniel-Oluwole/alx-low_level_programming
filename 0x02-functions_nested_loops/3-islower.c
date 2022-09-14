#include "main.h"

/**
 * _islower - lower alphabets
 ** @c : argument to be checked
 * Return: 1 - succesful, 0 - otherwise
 **/
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
