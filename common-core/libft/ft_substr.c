/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:45:15 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/17 23:07:23 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	counter1;
	size_t	counter2;

	counter1 = 0;
	counter2 = 0;
	if (start > ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	while (s[counter1] != 0)
	{
		if ((counter1 >= start) && (counter2 < len))
		{
			tmp[counter2] = s[counter1];
			counter2++;
		}
		counter1++;
	}
	tmp[counter2] = '\0';
	return (tmp);
}
