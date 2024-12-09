#include "mini_printf.h"

int	format_printer(char format, va_list ap)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret = ft_putchar(va_arg(ap, int));
	else if (format == 'd')
	{
		ft_putnbr_base(va_arg(ap, int), "0123456789", 10);
		//ret = number_len(va_arg(ap, int));
	}
	else if (format == 's')
		ret = ft_putstr(va_arg(ap, char *));
	else if (format == 'x')
		ft_putnbr_base(va_arg(ap, int), "0123456789abcdef", 16);
	else
	{
		ret = write (1, "%", 1);
		ret += ft_putchar(va_arg(ap, int));
	}
	return (ret);
}

int	mini_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
			ret += format_printer(*(++format), ap);
		else
			ret += write (1, format, 1);
		format++;
	}
	va_end (ap);
	return (ret);
}