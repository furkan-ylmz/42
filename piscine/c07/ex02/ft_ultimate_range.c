/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:39:41 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/11 14:03:18 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*nbr;
	int	counter;
	int	gap;

	counter = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	gap = max - min;
	nbr = malloc(gap * sizeof(int));
	if (gap == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = nbr;
	while (counter < gap)
	{
		nbr[counter] = min + counter;
		counter++;
	}
	return (gap);
}
