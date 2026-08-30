/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:24:57 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/12 18:36:53 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		c;

	str = (char *)malloc(sizeof(char) * (ft_len(size, strs, sep) + 1));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			str[c++] = sep[j++];
		i++;
	}
	str[c] = '\0';
	return (str);
}
