#include "ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	if (n <= 0)
	{	count = 1;
		n = -n;
	}
	else
		count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	print_decimal(int n)
{
	ft_putnbr_fd(n, 1);
	return (count_digits(n));
}