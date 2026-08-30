/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:18:08 by furyilma          #+#    #+#             */
/*   Updated: 2024/01/26 09:18:08 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_write_comb(int a, int b, int c, int d)
{
	if (a * 10 + b < c * 10 + d)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, " ", 1);
		write (1, &c, 1);
		write (1, &d, 1);
		if (a == '9' && b == '8')
		{
		}
		else
			write (1, ", ", 2);
	}
	d++;
	return (d);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					d = ft_write_comb (a, b, c, d);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
