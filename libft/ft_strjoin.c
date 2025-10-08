/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:31:06 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 17:31:07 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = (char *)malloc(len);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, ft_strlen(s1));
	ft_memcpy(joined + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (joined);
}
/*
int main(void)
{
    char *str1 = "Hola";
    char *str2 = " Mundo";
    char *result;

    result = ft_strjoin(str1, str2);
    if (result)
    {
        printf("Cadena unida: %s\n", result);
        free(result); // Liberar la memoria asignada
    }
    else
    {
        printf("Error al unir las cadenas.\n");
    }

    return 0;
}
    
int	main(void)
{
    char *s1 = "Hola, ";
    char *s2 = "mundo!";
    char *joined = ft_strjoin(s1, s2);

    if (!joined)
        printf("Error en strjoin\n");
    else
        printf("Cadena concatenada: %s\n", joined);

    free(joined);
    return (0);
}
*/
