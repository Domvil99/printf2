/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:19:07 by saospina          #+#    #+#             */
/*   Updated: 2025/06/26 18:37:56 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
    printf("ft_isprint(32) = %d\n", ft_isprint(32));  // Espacio ' '
    printf("ft_isprint(126) = %d\n", ft_isprint(126)); // '~'
    printf("ft_isprint(8) = %d\n", ft_isprint(8));   // No imprimible (backspace)
    return (0);
}
*/
