/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:38:33 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/21 15:28:54 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*first(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && j < (int)ft_strlen(set))
		{
			if (s1[i] == set[j++])
				flag = 1;
		}
		if (flag == 1)
		{
			i++;
			flag = 0;
			continue ;
		}
		return ((char *)&s1[i]);
	}
	return (0);
}

char	*last(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = ft_strlen(s1) - 1;
	j = 0;
	flag = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && j < (int)ft_strlen(set))
		{
			if (s1[i] == set[j++])
				flag = 1;
		}
		if (flag == 1)
		{
			i--;
			flag = 0;
			continue ;
		}
		return ((char *)&s1[i] + 1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		wc;
	int		count;
	int		size1;
	int		size2;

	if (first(s1, set) == 0 || last(s1, set) == 0)
	{
		tmp = (char *)malloc(sizeof(char) * (1));
		if (!tmp)
			return (0);
		tmp[0] = '\0';
		return (tmp);
	}
	size1 = ft_strlen(first(s1, set));
	size2 = ft_strlen(last(s1, set));
	wc = size1 - size2;
	tmp = (char *)malloc(sizeof(char) * (wc + 1));
	if (!tmp)
		return (0);
	count = ft_strlen(s1) - size1;
	tmp = ft_memcpy(tmp, &s1[count], wc);
	tmp[wc] = '\0';
	return (tmp);
}
