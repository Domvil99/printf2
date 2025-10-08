/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:28:49 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 17:28:51 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!needle[j + 1])
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *haystack = "Hola Mundo";
    const char *needle = "Mundo";
    char *result;

    result = ft_strnstr(haystack, needle, 10);
    if (result)
        printf("Encontrado: %s\n", result);
    else
        printf("No encontrado\n");

    return 0;
}

int	main(void)
{
    char haystack[] = "Hola, mundo!";
    char needle[] = "mundo";

    char *result = ft_strnstr(haystack, needle, 12);

    if (result)
        printf("Encontrado 'mundo' en: %s\n", result);
    else
        printf("'mundo' no encontrado.\n");

    return (0);
}
*/
