/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:31:04 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/12 16:52:15 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	counter;
	int	gap;

	counter = 0;
	if (min >= max)
		return (0);
	gap = max - min;
	nbr = malloc(gap * sizeof(int));
	if (gap == 0)
		return (0);
	while (counter < gap)
	{
		nbr[counter] = min + counter;
		counter++;
	}
	return (nbr);
}
