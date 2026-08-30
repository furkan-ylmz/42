/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:30:52 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/14 16:30:52 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	size_t	counter;

	counter = 0;
	tmp = (char *)s;
	while (counter < n)
	{
		if (tmp[counter] == (char)c)
			return (&tmp[counter]);
		counter++;
	}
	return (0);
}
