/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:30:15 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 17:30:18 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s) + 1;
	copy = (char *)malloc(len);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len);
	return (copy);
}
/*
int main(void)
{
    const char *original = "Hola Mundo";
    char *duplicado;

    duplicado = ft_strdup(original);
    if (duplicado)
    {
        printf("Cadena original: %s\n", original);
        printf("Cadena duplicada: %s\n", duplicado);
        free(duplicado); // Liberar la memoria asignada
    }
    else
    {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}

int	main(void)
{
    char *original = "Hola, mundo!";
    char *copy = ft_strdup(original);

    if (!copy)
        printf("Error en strdup\n");
    else
        printf("Copia creada: %s\n", copy);

    free(copy);
    return (0);
}
*/
