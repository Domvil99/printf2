/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:04 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 17:29:06 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i + 1 < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
    char src[] = "Hola Mundo";
    char dst[20];

    ft_strlcpy(dst, src, sizeof(dst));
    printf("Cadena copiada: %s\n", dst);

    return 0;
}

int	main(void)
{
    char src[] = "Hola, mundo!";
    char dst[6];
    size_t len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Después de strlcpy: %s\n", dst);
    printf("Longitud de src: %zu\n", len);

    return (0);
}
*/
