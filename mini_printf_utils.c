#include "mini_printf.h"

int	format_printer(const char *format, va_list ap)
{
	int	ret;

	ret = 0;
	if (*format == 'c')
		ret = write (1, format, 1);
	else if (*format == 'd')
		ret = putnbr();
	return (ret);
}