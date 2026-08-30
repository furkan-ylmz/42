/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:36:03 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/08 13:40:50 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter <= (nb / counter))
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}
