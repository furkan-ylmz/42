/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:35:11 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/17 13:53:21 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	counter1;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	counter = dlen;
	counter1 = 0;
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src[counter1] != '\0' && counter1 < dstsize - dlen - 1)
	{
		dst[counter] = src[counter1];
		counter++;
		counter1++;
	}
	dst[counter] = '\0';
	return (slen + dlen);
}
