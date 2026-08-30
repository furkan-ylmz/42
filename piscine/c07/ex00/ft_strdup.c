/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 09:42:35 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/12 17:02:34 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;
	int		counter;

	counter = 0;
	len = ft_strlen(src);
	str = malloc(sizeof(char) * (len + 1));
	while (src[counter] != '\0')
	{
		str[counter] = src[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
