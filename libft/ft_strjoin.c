/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:21:07 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/17 16:50:35 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	counter;
	int		alpha_count;
	char	*tmp;

	counter = 0;
	alpha_count = ft_strlen(s1) + ft_strlen(s2) + 1;
	tmp = (char *)malloc(sizeof(char) * alpha_count);
	if (tmp == 0)
		return (NULL);
	while (counter < ft_strlen(s1))
	{
		tmp[counter] = s1[counter];
		counter++;
	}
	while (counter - ft_strlen(s1) < ft_strlen(s2))
	{
		tmp[counter] = s2[counter - ft_strlen(s1)];
		counter++;
	}
	tmp[counter] = '\0';
	return (tmp);
}
