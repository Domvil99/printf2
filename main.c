#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	ret1, ret2;

	// Test básico de caracteres
	ret1 = ft_printf("Mi letra es: %c\n", 'A');
	ret2 = printf("Mi letra es: %c\n", 'A');
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test de strings
	ret1 = ft_printf("Mi string es: %s\n", "Hola 42");
	ret2 = printf("Mi string es: %s\n", "Hola 42");
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test de punteros
	int	x = 42;
	ret1 = ft_printf("Mi puntero es: %p\n", &x);
	ret2 = printf("Mi puntero es: %p\n", &x);
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test de enteros
	ret1 = ft_printf("Mi número es: %d\n", -1234);
	ret2 = printf("Mi número es: %d\n", -1234);
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test de unsigned
ret1 = ft_printf("Unsigned: %u\n", (unsigned int)4294967295);
ret2 = printf("Unsigned: %u\n", (unsigned int)4294967295);
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test de hexadecimal
ret1 = ft_printf("Hex minúscula: %x\n", (unsigned int)3735928559);
ret2 = printf("Hex minúscula: %x\n", (unsigned int)3735928559);
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

ret1 = ft_printf("Hex mayúscula: %X\n", (unsigned int)3735928559);
ret2 = printf("Hex mayúscula: %X\n", (unsigned int)3735928559);

	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	// Test del símbolo %
	ret1 = ft_printf("Porcentaje: %%\n");
	ret2 = printf("Porcentaje: %%\n");
	ft_printf("ft_printf retornó: %d | printf retornó: %d\n\n", ret1, ret2);

	return (0);
}
