#include "main.h"

int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    int i = 0;
    int found_digit = 0;

    while (s[i] == ' ')
    {
        i++;
    }

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        found_digit = 1;
        if (num > (2147483647 / 10) || (num == (2147483647 / 10) && (s[i] - '0') > 7))
        {
            return (sign == 1) ? 2147483647 : -2147483648;
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }

    if (!found_digit)
    {
        return 0;
    }

    return (sign == -1) ? -num : num;
}
