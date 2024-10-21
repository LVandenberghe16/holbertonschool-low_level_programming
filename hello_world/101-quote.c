#include <unistd.h>

int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(2, quote, 61);
return 1;
}
