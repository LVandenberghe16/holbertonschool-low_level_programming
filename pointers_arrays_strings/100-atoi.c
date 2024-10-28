#include "main.h"

static int is_sign(char c)
{
    if (c == '-')
        return 1;
    if (c == '+')
        return 2;
    return 0;
}

static int is_odd(int nb)
{
    if (nb % 2 == 0)
        return 0;
    return 1;
}

static int my_isnum(char c)
{
    if (47 < c && c < 58)
        return (1);
    return (0);
}

static int overflow(int nb, int i, char const *str)
{
    if ((str[i] > '7' && nb == 214748364) || nb > 214748364 ) {
        return 1;
    }
    return 0;
}

int _atoi(char *s)
{
    int nb = 0;
    char sign;
    int minus = 0;
    int i;


    for (i = 0 ; s[i] != '\0' ; i += 1) {
        sign = is_sign(s[i]);
        if (my_isnum(s[i]) == 0 && (sign == 0 || nb != 0))
            return is_odd(minus) == 1 ? -nb : nb;
        if (sign == 1)
            minus += 1;
        if (my_isnum(s[i]) == 1 && overflow(nb, i, s) == 1)
            return 0;
        if (my_isnum(s[i]) == 1) {
            nb = nb * 10;
            nb += s[i] - 48;
        }

    }
    return is_odd(minus) == 1 ? -nb : nb;
}