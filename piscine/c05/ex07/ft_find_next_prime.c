/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:54:21 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/07 17:27:48 by furyilma         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	nb += 1;
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
