void print_triangle(int size)
{
	if (size <= 0)
		return (void) write(1, "\n", 1);
    	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - i); j++)
		{
			write(1, " ", 1);
		}
		for (int j = 0; j < i; j++)
		{
			write(1, "#", 1);
		}
	write(1, "\n", 1);
	}
}

int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
