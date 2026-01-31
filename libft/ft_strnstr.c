/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:33:46 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/14 16:33:46 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	l;

	i = -1;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if ((int)len < 0)
		len = ft_strlen(haystack);
	while (++i < (int)len && haystack[i] != 0)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			l = ft_strlen(needle);
			while ((haystack[i] == needle[j]) && (l-- != 0) && i < (int)len)
			{
				if (l == 0)
					return ((char *)&haystack[i - j]);
				j++;
				i++;
			}
			i -= j;
		}
	}
	return (0);
}
