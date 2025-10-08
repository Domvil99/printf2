#include "ft_printf.h"

static void	ft_put_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_put_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
}

static int	count_digits(unsigned int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	print_unsigned(unsigned int n)
{
	ft_put_unsigned(n);
	return (count_digits(n));
}