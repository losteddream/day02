void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	azbuka;
	azbuka = 'z';
	while (azbuka >= 'a')
	{
		ft_putchar(azbuka);
		azbuka = azbuka - 1;
	}
}
