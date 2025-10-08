/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:21:12 by saospina          #+#    #+#             */
/*   Updated: 2025/06/26 18:27:41 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/* 
int	main(void)
{
    char str[] = "Hola Mundo!";
    printf("Antes bzero: %s\n", str);
    ft_bzero(str, 5);
    printf("Después bzero (primeros 5 bytes): %s\n", str + 5);
    return (0);
}
*/
