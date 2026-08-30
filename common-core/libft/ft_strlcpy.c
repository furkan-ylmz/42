/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:37:58 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/17 13:52:57 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	counter;
	unsigned int	line;

	line = 0;
	while (src[line] != '\0')
	{
		line++;
	}
	if (dstsize == 0)
		return (line);
	counter = 0;
	while (src[counter] != '\0' && counter < dstsize - 1)
	{
		dst[counter] = src[counter];
		counter ++;
	}
	dst[counter] = '\0';
	return (line);
}
