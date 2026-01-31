/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:13:07 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/24 14:37:36 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_src;
	char	*tmp_dst;

	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	if (src == 0 && dst == 0)
		return (NULL);
	while (n--)
	{
		*tmp_dst++ = *tmp_src++;
	}
	return (dst);
}
