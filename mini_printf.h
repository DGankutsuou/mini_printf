#ifndef MINI_PRINTF_H
# define MINI_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		format_printer(const char *format, va_list ap);
void	ft_putnbr(int n);
int		ft_putchar(char c);
int		number_len(int n);
#endif