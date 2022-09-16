#inlcude "main.h"

/**
 *isadigit - it checks if number is a digit
 *@c: character to br tested
 *Return:1 if is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && c <= 57)
	{
		return (1);
	}
	return (0);
}
