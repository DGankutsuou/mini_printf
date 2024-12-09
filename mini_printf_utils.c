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

int	ft_putnbr_base(int n, char base_len, char *base)
{
	int	ret;

	if (n < 0)
		return (ft_putchar('-') + ft_putnbr_base(-n, base_len, base));
	if (n < base_len)
		return (ft_putchar(base[n]));
	else
	{
		ret = ft_putnbr_base(n / base_len, base_len, base);
		return (ret + ft_putnbr_base(n % base_len, base_len, base));
	}
}

int	ft_putstr(char *s)
{
	int	ret;

	ret = 0;
	if (!s)
		return (0);
	while (s[ret])
	{
		ft_putchar(s[ret]);
		ret++;
	}
	return (ret);
}
