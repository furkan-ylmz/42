/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:19 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:53 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:29:08 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/18 12:45:09 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_counter(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	int		count;
	char	*text;

	if (n == 0)
		return (ft_strdup("0"));
	count = ft_counter(n);
	text = (char *)malloc(sizeof(char) * (count + 1));
	if (!text)
		return (0);
	text[count--] = '\0';
	while (count >= 0)
	{
		text[count] = (n % 10) + 48;
		n /= 10;
		count--;
	}
	return (text);
}
