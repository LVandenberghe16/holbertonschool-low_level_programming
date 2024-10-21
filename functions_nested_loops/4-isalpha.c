#include "main.h"

/**
* _isalpha - _isalpha function
* @c: the string you want to get the size of
*
* Description: this function tell if the case is lower
*
* Return: return lenght of a string
*/
int _isalpha(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
