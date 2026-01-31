/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:07:28 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/24 21:24:26 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *) src;
	tmp_dst = (char *) dst;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
	}
	return (dst);
}
