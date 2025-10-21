/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <saospina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:56:14 by saospina          #+#    #+#             */
/*   Updated: 2025/10/21 15:56:14 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int	count;

	if (n <= 0)
	{
		count = 1;
		n = -n;
	}
	else
		count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	print_decimal(int n)
{
	ft_putnbr_fd(n, 1);
	return (count_digits(n));
}
