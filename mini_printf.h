#ifndef MINI_PRINTF_H
# define MINI_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	format_printer(const char *format, va_list ap);

#endif