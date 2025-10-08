/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:46:07 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 19:30:14 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
int main(void)
{
    char str[] = "Hola Mundo";
    int fd = 1; // 1 es el descriptor de archivo para stdout

    ft_putendl_fd(str, fd);

    return 0;
}

int	main(void)
{
    ft_putendl_fd("Hola, mundo!", 1);
    return (0);
}
*/
