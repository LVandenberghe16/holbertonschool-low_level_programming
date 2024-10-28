#include <unistd.h>

void print_square(int n)
{
	if (n <= 0)
		return (void)write(1, "\n", 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			write(1, "#", 1);
		}
		write(1, "\n", 1);
	}
}

int main(void)
{
    print_square(0);
    print_square(2);
    print_square(10);
    return (0);
}
