#ifndef MINI_PRINTF_H
# define MINI_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	mini_printf(const char *format, ...);
int		format_printer(char format, va_list ap);
void	ft_putnbr_base(int n, char *base, int base_len);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		number_len(int n);
#endif