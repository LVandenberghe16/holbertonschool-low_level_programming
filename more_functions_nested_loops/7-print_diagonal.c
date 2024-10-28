#include <unistd.h>

void print_diagonal(int n)
{
	if (n <= 0)
		return (void)write(1, "\n", 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			write(1, " ", 1);
		}
		write(1, "\\\n", 2);
	}
}

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
