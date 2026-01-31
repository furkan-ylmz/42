/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:30:14 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/14 16:30:14 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	size_t	counter;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (tmp1[counter] != tmp2[counter])
			return ((unsigned char)tmp1[counter]
				- (unsigned char)tmp2[counter]);
		counter++;
	}
	return (0);
}
