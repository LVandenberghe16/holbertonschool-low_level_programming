#include <stdio.h>

/**
* _isdigit - oui
* @c: character
* Return: restult
*/
int _isdigit(char c)
{
return !(c & 0xf);
}

