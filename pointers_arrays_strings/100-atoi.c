#include "main.h"

int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    int i = 0;
    int found_digit = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }

        if (s[i] == '-' || s[i] == '+')
        {
            if (found_digit)
                break;
            if (s[i] == '-')
                sign *= -1;
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            found_digit = 1;
            num = num * 10 + (s[i] - '0');

            if (num > 2147483647)
            {
                return (sign == 1) ? 2147483647 : -2147483648;
            }
        }
        else if (found_digit)
        {
            break;
        }
        i++;
    }

    if (!found_digit)
        return 0;

    return sign * num;
}
