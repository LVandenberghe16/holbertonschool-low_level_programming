#include <unistd.h>

/**
* main - main function of the program
*
* Return: 1 for error
*/
int main(void)
{
    const char *quote =
    "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, quote, 59);
    return (1);
}
