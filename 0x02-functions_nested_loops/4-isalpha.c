#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: the character to be checked
 * Return: 1 for alphabatic charcter 0 for else
 */
int _islpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
