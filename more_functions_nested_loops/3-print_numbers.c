void print_numbers(void)
{
char i;

for (i = '0'; i < '9'; i++)
{
	write(1, &c, 1);
}
write(1, '\n', 1);
}