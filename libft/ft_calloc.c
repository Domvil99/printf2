/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saospina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 17:29:58 by saospina          #+#    #+#             */
/*   Updated: 2025/06/26 18:29:36 by saospina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(1));
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*
int	main(void)
{
	// Caso normal: Reserva 5 enteros
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Error en calloc\n");
		return (1);
	}
	printf("Caso normal:\n");
	for (int i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	free(arr);

	// Caso especial: count = 0
	arr = (int *)ft_calloc(0, sizeof(int));
	if (!arr)
		printf("Error en calloc (count = 0)\n");
	else
		printf("Caso count = 0: Puntero válido obtenido\n");
	free(arr);

	// Caso especial: size = 0
	arr = (int *)ft_calloc(5, 0);
	if (!arr)
		printf("Error en calloc (size = 0)\n");
	else
		printf("Caso size = 0: Puntero válido obtenido\n");
	free(arr);

	// Caso límite: malloc falla (simulación manual)
	arr = (int *)ft_calloc((size_t)-1, (size_t)-1);
	if (!arr)
		printf("Error esperado en calloc (overflow)\n");

	return (0);
}

int	main(void)
{
    int	*arr = (int *)ft_calloc(5, sizeof(int));

    if (!arr)
        printf("Error en calloc\n");
    else
    {
        for (int i = 0; i < 5; i++)
            printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);
    return (0);
}
*/
