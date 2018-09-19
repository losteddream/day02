void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char symbol;

	symbol = 'a';
	while(symbol <= 'z')
	{
		ft_putchar(symbol);
		symbol++;
	}
}
