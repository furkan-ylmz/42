/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:03:48 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/17 16:39:16 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;

	counter = ft_strlen((char *)s);
	if (c == 0)
		return ((char *)&s[counter]);
	while (counter >= 0)
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter--;
	}
	return (0);
}
