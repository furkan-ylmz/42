/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:38:47 by furyilma          #+#    #+#             */
/*   Updated: 2024/01/25 18:29:30 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	char	a;
	char	b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		write(1, &a, 1);
		a++;
	}
}
