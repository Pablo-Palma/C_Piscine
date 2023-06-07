#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_convert(char d)
{
	unsigned char n;

	n = d;
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[n / 16]);
	ft_putchar("0123456789abcdef"[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31  && str[i] < 127)
			ft_putchar(str[i]);
		else
			ft_convert(str[i]);
		i++;
	}
}

int	main(void)
{
	char str[]= "a\n";

	ft_putstr_non_printable(str);
	return (0);
}
