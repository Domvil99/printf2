#include "ft_printf.h"

int	print_pointer(unsigned long long ptr)
{
	int	len;

	len = write(1, "0x", 2);
	len += ft_putnbr_base(ptr, "0123456789abcdef");
	return (len);
}