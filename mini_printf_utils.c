#include "mini_printf.h"

int	number_len(int n)
{
	int	number_len;

	if (n == -2147483648)
		return (11);
	number_len = 1;
	if (n < 0)
		number_len = 2;
	while (n / 10)
	{
		n /= 10;
		number_len++;
	}
	return (number_len);
}

int	ft_putchar(char c)
{
	return ((int)write(1, &c, 1));
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}