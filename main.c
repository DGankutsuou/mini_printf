#include "mini_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len;
	int a, b;

	len = mini_printf("%d -> %c -> %x -> %s\n", 0x2a, 97, 300, "Good?");
	mini_printf("\nchars have been written %d\n", len);
	printf("\nchars have been written %d\n", len);
	return (0);
}