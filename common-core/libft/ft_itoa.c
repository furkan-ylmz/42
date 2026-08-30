/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:29:08 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/21 20:42:08 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(int n)
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

int	ft_negative(int *n)
{
	int		flag;

	flag = 0;
	if (*n < 0)
	{
		flag = 1;
		*n *= -1;
	}
	return (flag);
}

char	*ft_diffrence(int n)
{
	char	*text;

	if (n == 0)
	{
		text = (char *)malloc(sizeof(char) * 2);
		if (!text)
			return (0);
		text[0] = n + 48;
		text[1] = '\0';
		return (text);
	}
	else
		return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	int		count;
	int		flag;
	char	*text;

	if (n == 0 || n == -2147483648)
		return (ft_diffrence(n));
	flag = ft_negative(&n);
	count = ft_counter(n);
	if (flag == 1)
		count++;
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
	if (flag == 1)
		text[0] = '-';
	return (text);
}
