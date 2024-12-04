#include <stdio.h>
#include <stdarg.h>

int	age_averge(int	number, ...) // number i the fixed parameter
{
	va_list	ap; // pointr to number
	int		total;
	int		iterator;

	va_start (ap, number); // scape the number
	total = 0;
	while (iterator < number)
	{
		total += va_arg(ap, int);
		iterator++;
	}
	return (total / number);
}

int	main(void)
{
	int	number;
	int	average;

	number = 3;
	average = age_averge (number, 10, 15, 20);
	printf ("The average age of these %d is: %d\n", number, average);
	return (0);
}
