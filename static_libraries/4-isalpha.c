#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: is the character checked
 * Return: 1 if c is a letter, 0 the otherside
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
