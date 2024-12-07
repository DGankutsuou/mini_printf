#include "mini_printf.h"

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
			ret += write (1, format++, 1);
	}
	va_end (ap);
	return (ret);
}