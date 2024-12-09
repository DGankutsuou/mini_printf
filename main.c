#include "mini_printf.c"
#include "mini_printf.h"
#include "mini_printf_utils.c"

// #include <unistd.h>

// int mini_putnbr_base(long n, int base)
// {
//   int ret;
//   char *base_digits;

// 	base_digits = "0123456789abcdefgh";
//   if (n < 0)
//   {
//     write (1, '-', 1);
// 	return (mini_putnbr_base(n, base) + 1);
//   }
//   if (n < base)
// 	return ((int)write(1, &base_digits[n], 1));
//   else
//   {
// 	ret = mini_putnbr_base(n / base, base);
//   	return (ret + mini_putnbr_base(n % base, base));
//   }
// }

// int main() {

//   return 0;
// }

int	main(void)
{
	mini_printf("-> %d -> %c\n", 0x2a, 97);
	return (0);
}