void print_line(int n)
{
	if (n <= 0) {
		goto newline;
	}
	for (int i = 0; i < n; i++) {
		write(1, "_", 1);
	}
newline:
	write(1, "\n", 1);
}
