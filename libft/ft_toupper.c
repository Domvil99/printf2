/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:19:26 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 18:08:00 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));   // 'A'
    printf("ft_toupper('z') = %c\n", ft_toupper('z'));   // 'Z'
    printf("ft_toupper('A') = %c\n", ft_toupper('A'));   // 'A' (sin cambio)
    printf("ft_toupper('1') = %c\n", ft_toupper('1'));   // '1' (sin cambio)
    return (0);
}
*/
