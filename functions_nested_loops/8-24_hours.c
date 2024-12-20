#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: Prints every minute starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
    int hours, minutes;

    for (hours = 0; hours < 24; hours++)
    {
        for (minutes = 0; minutes < 60; minutes++)
        {
            _putchar((hours / 10) + '0');
            _putchar((hours % 10) + '0');
            _putchar(':');
            _putchar((minutes / 10) + '0');
            _putchar((minutes % 10) + '0');
            _putchar('\n');
        }
    }
}
