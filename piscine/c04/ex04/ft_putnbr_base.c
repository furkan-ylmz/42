/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:50:46 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/07 18:10:38 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

int	ft_is_error(char *base)
{
	int	counter;
	int	counter1;

	counter = 0;
	counter1 = 1;
	if (ft_strlen(base) == 1 || base[counter] == '\0')
		return (0);
	while (base[counter] != '\0')
	{
		if (base[counter] <= 32 || base [counter] == 127
			|| base[counter] == '-' || base[counter] == '+')
			return (0);
		while (base[counter1] != '\0')
		{
			if (base[counter] == base[counter1])
				return (0);
			counter1++;
		}
		counter++;
		counter1 = counter + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	tmp;

	tmp = nbr;
	if (ft_is_error(base) == 0)
		return ;
	if (tmp < 0)
	{
		ft_putchar('-');
		tmp *= -1;
	}
	if (tmp < ft_strlen(base))
		ft_putchar(base[tmp]);
	if (tmp >= ft_strlen(base))
	{
		ft_putnbr_base(tmp / ft_strlen(base), base);
		ft_putnbr_base(tmp % ft_strlen(base), base);
	}
}
