/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:24:46 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/07 17:33:24 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	counter;
	int	pos;
	int	result;

	result = 0;
	pos = 1;
	counter = 0;
	while ((str[counter] > 8 && str[counter] < 14) || str[counter] == 32)
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
		{
			pos *= -1;
		}
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result = result * 10 + (str[counter] - 48);
		counter++;
	}
	return (result * pos);
}
