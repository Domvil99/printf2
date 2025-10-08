/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:31:27 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 17:53:52 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
/*
int     main(void)
{
        char *s1 = "###Hola, mundo###";
        char *set = "#";
        char *trimmed = ft_strtrim(s1, set);

        printf("Original: \"%s\"\n", s1);
        printf("Recortado: \"%s\"\n", trimmed);

        free(trimmed);
        return (0);
}

int main(void)
{
    const char *str = "   Hola Mundo   ";
    const char *set = " ";
    char *result;

    result = ft_strtrim(str, set);
    if (result)
    {
        printf("Cadena original: '%s'\n", str);
        printf("Cadena recortada: '%s'\n", result);
        free(result); // Liberar la memoria asignada
    }
    else
    {
        printf("Error al recortar la cadena.\n");
    }

    return 0;
}

int     main(void)
{
    char *s1 = "  Hola, mundo!  ";
    char *set = " ";
    char *trimmed = ft_strtrim(s1, set);

    printf("String original: \"%s\"\n", s1);
    printf("String recortada: \"%s\"\n", trimmed);

    free(trimmed);
    return (0);
}
*/
