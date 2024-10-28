#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: Pointer to the string to print.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
		if (i > 220 && str[i] == '.')
		{
			_putchar(str[i]);
			goto end;
		}
        _putchar(str[i]);
        i += 2;
    }
end:
    _putchar('\n');
}