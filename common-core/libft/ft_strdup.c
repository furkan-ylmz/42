/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:33:02 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/14 16:33:02 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*array;
	size_t	len;

	len = ft_strlen(s1) + 1;
	array = (char *)malloc((len) * sizeof(char));
	if (!array)
		return (0);
	ft_memcpy(array, s1, len);
	return (array);
}
