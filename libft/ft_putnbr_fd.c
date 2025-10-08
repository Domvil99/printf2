/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:46:40 by saospina          #+#    #+#             */
/*   Updated: 2025/05/18 19:04:12 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd (n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
/*
int main(void)
{
    int fd = 1; // 1 es el descriptor de archivo para stdout
    ft_putnbr_fd(12345, fd);
    write(fd, "\n", 1); // Para nueva línea
    ft_putnbr_fd(-12345, fd);
    write(fd, "\n", 1); // Para nueva línea
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1); // Para nueva línea
    return 0;
}

int	main(void)
{
    ft_putnbr_fd(-12345, 1);
    write(1, "\n", 1);
    return (0);
}
*/
