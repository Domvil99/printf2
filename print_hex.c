#include "ft_printf.h"

int	print_hex(unsigned int n, const char format)
{
	if (format == 'x')
		return (ft_putnbr_base(n, "0123456789abcdef"));
	else
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
}