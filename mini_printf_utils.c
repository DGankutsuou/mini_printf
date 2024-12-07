#include "mini_printf.h"

int	ft_putchar(char c)
{
	return ((int)write(1, &c, 1));
}

int	ft_putnbr(int n)
{
	int	ret;

	if (n == -2147483648)
		return ((int)write(1, "-2147483648", 11));
	ret = 0;
	if (n < 0)
		;
}