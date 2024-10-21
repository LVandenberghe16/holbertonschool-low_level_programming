#include "main.h"

/**
* _islower - _islower function
* @c: the string you want to get the size of
*
* Description: this function tell if the case is lower
*
* Return: return lenght of a string
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
