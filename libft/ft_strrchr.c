/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:28:02 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 18:25:15 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}
/*
int main(void)
{
    const char *str = "Hola Mundo";
    char *result;

    result = ft_strrchr(str, 'M');
    if (result)
        printf("Encontrado: %s\n", result);
    else
        printf("No encontrado\n");

    return 0;
}

int	main(void)
{
    char str[] = "Hola, mundo!";
    char *result = ft_strrchr(str, 'o');

    if (result)
        printf("Última aparición de 'o': %s\n", result);
    else
        printf("'o' no encontrado.\n");

    return (0);
}
*/
