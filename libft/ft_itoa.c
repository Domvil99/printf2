/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:31:57 by saospina          #+#    #+#             */
/*   Updated: 2025/06/26 18:46:59 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 1;
	if (n > 0)
		len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long		nb;

	nb = n;
	len = ft_numlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len--)
	{
		str[len] = '0' + (nb % 10);
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/* 
int main(void)
{
    const char *str = "Hola, mundo! Bienvenido a la programación.";
    char **result;
    size_t i;

    result = ft_split(str, ' ');
    if (result)
    {
        for (i = 0; result[i]; i++)
            printf("Palabra %zu: %s\n", i, result[i]);
        for (i = 0; result[i]; i++)
            free(result[i]);
        free(result);
    }
    else
        printf("Error al dividir la cadena.\n");

    return 0;
}

int	main(void)
{
    int n1 = 42;
    int n2 = -12345;
    int n3 = 0;

    printf("itoa(42) = %s\n", ft_itoa(n1));
    printf("itoa(-12345) = %s\n", ft_itoa(n2));
    printf("itoa(0) = %s\n", ft_itoa(n3));

    return (0);
}
*/
