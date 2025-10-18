int main(void)
{
    printf("int: min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: max = %u\n", UINT_MAX);
    printf("long long: min = %lld, max = %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long: max = %llu\n", ULLONG_MAX);
    return 0;
}
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Demostración de ft_printf:\n");

	ft_printf("Carácter: %c\n", 'A');
	ft_printf("Cadena: %s\n", "Hola 42");
	ft_printf("Puntero: %p\n", (void *)0x1234abcd);
	ft_printf("Decimal: %d\n", -42);
	ft_printf("Entero sin signo: %u\n", 4294967295);
	ft_printf("Hex minúsculas: %x\n", 305441741);
	ft_printf("Hex mayúsculas: %X\n", 305441741);
	ft_printf("Porcentaje: %%\n");

	return (0);
}