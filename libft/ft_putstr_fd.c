/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:44:14 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 18:43:49 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*
int main(void)
{
    char str[] = "Hola Mundo";
    int fd = 1; // 1 es el descriptor de archivo para stdout

    ft_putstr_fd(str, fd);

    return 0;
}

int	main(void)
{
    ft_putstr_fd("Hola, mundo!\n", 1);
    return (0);
}
*/
