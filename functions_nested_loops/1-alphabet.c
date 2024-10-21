#include "main.h"

/**
* _putchar - writes a single character to stdout
* @c: the character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet()
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        _putchar(alphabet[i]);
    }
    _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}