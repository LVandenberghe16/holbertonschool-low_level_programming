#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The converted integer, or 0 if there are no numbers.
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    int i = 0;

    while (s[i] == ' ')
        i++;

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9')
    {
        if (num > (unsigned int)(2147483647 / 10) ||
            (num == (unsigned int)(2147483647 / 10) && (s[i] - '0') > 7))
        {
            return (sign == 1) ? 2147483647 : -2147483648;
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return (sign == -1) ? -num : num;
}
